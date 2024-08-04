import sys

t = int(sys.stdin.readline())

for _ in range(t):
    arr = []
    k = int(sys.stdin.readline())
    n = int(sys.stdin.readline())
    
    for i in range(n+1):
        arr.append(i)
    
    for i in range(k):
        for j in range(1, n+1):
            arr[j] += arr[j-1]

    sys.stdout.write(f"{arr[n]}\n")