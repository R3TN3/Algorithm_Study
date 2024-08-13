import sys

a, b, n = map(int, sys.stdin.readline().split())

for i in range(n):
    a = (a%b) * 10
    res = a // b

sys.stdout.write(f"{res}\n")