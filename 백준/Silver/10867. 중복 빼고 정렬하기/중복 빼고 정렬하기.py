import sys

n = int(sys.stdin.readline())

arr = set(map(int, sys.stdin.readline().split()))
arr = sorted(arr)

for i in arr:
  sys.stdout.write(str(i) + " ")