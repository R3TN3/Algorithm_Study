import sys

def gcd(a, b):
    while b:
        a, b = b, a%b
        
    return a

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

for i in range(1, n):
    num = gcd(arr[0], arr[i])
    sys.stdout.write(f"{arr[0] // num}/{arr[i] // num}\n")