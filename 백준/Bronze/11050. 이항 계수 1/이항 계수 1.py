import sys

n, k = map(int, sys.stdin.readline().split())

def fac(num):
  sum = 1
  for i in range(1, num + 1):
    sum *= i

  return sum

bin_coe = fac(n) // (fac(k) * fac(n - k))
print(bin_coe)