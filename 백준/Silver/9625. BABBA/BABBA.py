import sys

n = int(sys.stdin.readline())
a = 0
b = 1

for i in range(1, n):
  a, b = b, a + b

sys.stdout.write(f"{a} {b}")