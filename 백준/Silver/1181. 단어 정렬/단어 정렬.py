import sys

n = int(sys.stdin.readline())
arr = [""] * n

for i in range(n):
  arr[i] = sys.stdin.readline()

arr = list(set(arr))
arr.sort()
arr.sort(key = lambda x : len(x))

s = ""
for i in range(len(arr)):
  s += (arr[i])

sys.stdout.write(s)