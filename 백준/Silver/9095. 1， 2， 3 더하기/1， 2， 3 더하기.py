import sys

t = int(sys.stdin.readline())
arr = [0] * 12
arr[1] = 1
arr[2] = 2
arr[3] = 4

for i in range(t):
  n = int(sys.stdin.readline())

  for j in range(4, n+1):
    arr[j] = arr[j-1] + arr[j-2] + arr[j-3]

  sys.stdout.write(str(arr[n]) + "\n")