import sys

def gcd(x, y):
  while y:
    x, y = y, x % y

  return x

t = int(sys.stdin.readline())

for i in range(t):
  x, y = map(int, sys.stdin.readline().split())

  print((x * y) // gcd(x, y))