import sys

n, m = map(int, sys.stdin.readline().split())
arr = []

for i in range(n+1):
    arr.append(i)

for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    tmp_arr = [0] * a

    for j in range(b, a-1, -1):
        tmp_arr.append(arr[j])

    for j in range(a, b+1):
        arr[j] = tmp_arr[j]

for i in arr:
    if i == 0:
        continue
    sys.stdout.write(str(i) + " ")