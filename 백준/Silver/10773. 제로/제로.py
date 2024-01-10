import sys

k = int(sys.stdin.readline())
arr = []

for i in range(k):
  x = int(sys.stdin.readline())
  if x == 0:
    arr.pop()
  else:
    arr.append(x)

print(sum(arr))