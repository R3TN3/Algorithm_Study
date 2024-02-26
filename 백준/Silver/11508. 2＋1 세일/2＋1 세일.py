import sys

n = int(sys.stdin.readline())
arr = []

for i in range(n):
  arr.append(int(sys.stdin.readline()))

arr.sort(reverse=True)

for i in range(2, n, 3):
  arr[i] = 0

sys.stdout.write(str(sum(arr)))