import sys

def gcd(a, b):
    while b:
        a, b = b, a%b
    return a

n = int(sys.stdin.readline())
a = int(sys.stdin.readline())

arr = []
for _ in range(n-1):
    num = int(sys.stdin.readline())
    arr.append(num - a)
    a = num

g = arr[0]
for i in range(1, len(arr)):
    g = gcd(g, arr[i])


cnt = 0
for i in arr:
    cnt += i // g - 1

sys.stdout.write(str(cnt) + "\n")