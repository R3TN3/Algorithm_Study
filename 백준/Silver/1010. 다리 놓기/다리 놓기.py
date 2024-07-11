import sys

def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n-1)

t = int(sys.stdin.readline())

for _ in range(t):
    n, m = map(int, sys.stdin.readline().split())
    sys.stdout.write(str(int(factorial(m) / (factorial(m - n) * factorial(n)))) + "\n")