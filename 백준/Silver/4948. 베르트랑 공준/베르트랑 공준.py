import sys

arr = [False, False] + [True] * (123456*2 + 1 - 2)

for i in range(2, 123456*2+1):
    for j in range(2, int(i**0.5)+1):
        if i % j == 0:
            arr[i] = False
            break

while True:
    n = int(sys.stdin.readline())    
    if n == 0:
        break

    sys.stdout.write(f"{arr[n+1:2*n+1].count(True)}\n")