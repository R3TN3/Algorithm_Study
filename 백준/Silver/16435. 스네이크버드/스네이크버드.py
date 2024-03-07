import sys

n, l = map(int, sys.stdin.readline().split())
h_arr = list(map(int, sys.stdin.readline().split()))
h_arr.sort()

for i in range(n):
  if l >= h_arr[i]:
    l += 1
  else:
    break

sys.stdout.write(str(l) + "\n")