import sys

n = int(sys.stdin.readline())
arr = []
sum = 0

for i in range(n):
  arr.append(int(sys.stdin.readline()))

arr.sort(reverse = True)

for i in range(0, n-2):
  if arr[i] < arr[i+1] + arr[i+2]:
    sum += arr[i] + arr[i+1] + arr[i+2]
    break

if sum == 0:
  sys.stdout.write(str(-1) + "\n")
else:
  sys.stdout.write(str(sum) + "\n")