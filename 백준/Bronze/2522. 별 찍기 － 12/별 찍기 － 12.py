import sys

n = int(sys.stdin.readline())

for i in range(1, n):
    sys.stdout.write(" " * (n-i) + "*" * i + "\n")

for i in range(n, 0, -1):
    sys.stdout.write(" " * (n-i) + "*" * i + "\n")