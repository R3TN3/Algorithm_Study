import sys

n = int(sys.stdin.readline())

a = list(map(int, sys.stdin.readline().split()))
b = list(map(int, sys.stdin.readline().split()))

a = sorted(a, reverse=True)
b = sorted(b)

for i in range(n):
    b[i] = b[i] * a[i]

sys.stdout.write(str(sum(b)))