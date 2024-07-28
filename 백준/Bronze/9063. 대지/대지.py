import sys

n = int(sys.stdin.readline())
max_x, min_x = -10001, 10001
max_y, min_y = -10001, 10001

for i in range(n):
    x, y = map(int, sys.stdin.readline().split())

    if x > max_x:
        max_x = x
    if x < min_x:
        min_x = x

    if y > max_y:
        max_y = y
    if y < min_y:
        min_y = y

sys.stdout.write(f"{(max_x - min_x) * (max_y - min_y)}\n")