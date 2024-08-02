import sys

n = int(sys.stdin.readline())

for i in range(n-54, n):
    tmp = i
    check = 0
    
    while tmp > 0:
        check += tmp % 10
        tmp //= 10
    
    if check + i == n:
        sys.stdout.write(f"{i}\n")
        break
else:
    sys.stdout.write(f"0\n")