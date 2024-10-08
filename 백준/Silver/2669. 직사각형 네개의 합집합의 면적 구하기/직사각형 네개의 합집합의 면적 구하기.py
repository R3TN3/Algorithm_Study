import sys

arr = [[0] * 101 for _ in range(101)]
area = 0

for _ in range(4):
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    for i in range(x1, x2):
        for j in range(y1, y2):
            arr[i][j] = 1

for i in range(101):
    area += arr[i].count(1)

sys.stdout.write(f"{area}\n")