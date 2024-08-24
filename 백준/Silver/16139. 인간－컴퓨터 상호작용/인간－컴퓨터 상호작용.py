import sys

s = sys.stdin.readline().rstrip()
q = int(sys.stdin.readline())

arr = [[0] * 26]
arr[0][ord(s[0]) - 97] = 1

for i in range(1, len(s)):
    arr.append(arr[-1][:])
    arr[i][ord(s[i]) - 97] += 1


for i in range(q):
    a, l, r = map(str, sys.stdin.readline().split())
    l, r = int(l), int(r)

    if l == 0:
        sys.stdout.write(f"{arr[r][ord(a) - 97]}\n")
    else:
        sys.stdout.write(f"{arr[r][ord(a) - 97] - arr[l-1][ord(a) - 97]}\n")