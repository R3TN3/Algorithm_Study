import sys

s = sys.stdin.readline().rstrip()
arr = set()

for i in range(len(s)):
    tmp  = ""
    for j in range(len(s)-i):
        tmp += s[j+i]
        arr.add(tmp)

sys.stdout.write(f"{len(arr)}\n")