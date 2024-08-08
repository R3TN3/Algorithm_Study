import sys

n = int(sys.stdin.readline())
weight = 0
arr = [int(sys.stdin.readline()) for _ in range(n)]
arr = sorted(arr)

for i in range(len(arr)):
    if arr[i] * (n-i) > weight:
        weight = arr[i] * (n-i)

sys.stdout.write(f"{weight}\n")