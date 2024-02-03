import sys

def gcd(x, y):
  while x:
    x, y = y % x, x

  return y

t = int(input())

for i in range(t):
  num = list(map(int, sys.stdin.readline().split()))
  n = num.pop(0)
  sum = 0

  for i in range(n - 1):
    for j in range(i+1, n):
      sum += gcd(num[i], num[j])

  print(sum)