import sys

def gcd(x, y):
  while y:
    x, y = y, x % y

  return x

a, b = map(int, sys.stdin.readline().split())

sys.stdout.write(str(a * b // gcd(a, b)))