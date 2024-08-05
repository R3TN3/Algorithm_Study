import sys

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a1, b1 = map(int, sys.stdin.readline().split())
a2, b2 = map(int, sys.stdin.readline().split())

a = a1 * b2 + a2 * b1
b = b1 * b2

num = gcd(a, b)
a = a // num
b = b // num

sys.stdout.write(f"{a} {b}\n")