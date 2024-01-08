import sys

n, k = map(int, sys.stdin.readline().split())
arr = [0] * n
tmp = ""
num = k-1

for i in range(1, n + 1):
  arr[i-1] = i

while len(arr) != 0:
  if num < len(arr):
    if arr[num] != 0:
      tmp += (str(arr[num]) + ", ")
      arr[num] = 0
      num += k
  else:
    num -= len(arr)
    
    while 0 in arr:
      arr.remove(0)

sys.stdout.write("<" + tmp[:-2] + ">")