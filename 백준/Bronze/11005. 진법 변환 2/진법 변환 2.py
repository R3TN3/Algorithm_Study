import sys

n, b = map(int, sys.stdin.readline().split())
num = ""

while n:
    if n % b > 9:
        num += chr(n % b + 55)
    else:
        num += str(n % b)
    n //= b

sys.stdout.write(f"{num[::-1]}\n")