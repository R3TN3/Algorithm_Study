import sys

n = int(sys.stdin.readline())
a = 1
b = 2

for i in range(3, n+1):
    a, b = b, (a+b) % 10007

if n == 1:
    sys.stdout.write(str(a) + "\n")
else:
    sys.stdout.write(str(b) + "\n")