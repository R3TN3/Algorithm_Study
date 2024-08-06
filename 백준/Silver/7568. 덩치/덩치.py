import sys

n = int(sys.stdin.readline())
weight = []
height = []
score = [0] * n

for _ in range(n):
    x, y = map(int, sys.stdin.readline().split())
    weight.append(x)
    height.append(y)

for i in range(n):
    for j in range(n):
        if weight[i] < weight[j] and height[i] < height[j]:
            score[i] += 1

for i in score:
    sys.stdout.write(f"{i+1} ")