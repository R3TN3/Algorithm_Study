import sys

n = int(sys.stdin.readline())
sum = 0

arr = list(map(int, sys.stdin.readline().split()))
arr.sort()

for i in range(n):
  sum += arr[i] * (n - i)

sys.stdout.write(str(sum))