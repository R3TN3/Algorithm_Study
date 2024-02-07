import sys

n, m = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

for i in range(1, n):
  arr[i] = arr[i-1] + arr[i];

arr.insert(0, 0)

for i in range(m):
  a, b = map(int, sys.stdin.readline().split())
  sys.stdout.write(str(arr[b] - arr[a-1]) + "\n")