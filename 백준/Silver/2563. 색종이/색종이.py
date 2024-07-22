import sys

n = int(sys.stdin.readline())
arr = []

for _ in range(100):
    arr.append([0] * 100)

for _ in range(n):
    x, y = map(int, sys.stdin.readline().split())
    for i in range(x, x+10):
        for j in range(y, y+10):
            arr[i][j] = 1

cnt = sum(row.count(1) for row in arr)
sys.stdout.write(f"{cnt}\n")