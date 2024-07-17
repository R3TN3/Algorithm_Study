import sys

n, m = map(int, sys.stdin.readline().split())
arr = []

for i in range(n+1):
    arr.append(i)

for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    arr[a], arr[b] = arr[b], arr[a]

for i in arr:
    if i == 0:
        continue
    sys.stdout.write(str(i) + " ")