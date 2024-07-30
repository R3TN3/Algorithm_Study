import sys

a1, a0 = map(int, sys.stdin.readline().split())
c = int(sys.stdin.readline())
n = int(sys.stdin.readline())

f = a1 * n + a0
g = c * n

if (f <= g and a1 <= c):
    sys.stdout.write("1\n")
else:
    sys.stdout.write("0\n")