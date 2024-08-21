import sys

n = int(sys.stdin.readline())
arr = []
x, y = 0, 0

for _ in range(n):
    arr.append(sys.stdin.readline().rstrip())

cnt = 0
for i in range(n):
    if arr[i].count("*") > cnt:
        x = i+1
        cnt = arr[i].count("*")

for i in range(n):
    if arr[x][i] == "*":
        y = i+1
        break

left_arm = 0
for i in range(y-1):
    if arr[x-1][i] == "*":
        left_arm += 1

right_arm = 0
for i in range(y, n):
    if arr[x-1][i] == "*":
        right_arm += 1
    else:
        break

waist = 0
for i in range(x, n):
    if arr[i][y-1] == "*":
        waist += 1
    else:
        break

left_leg = 0
for i in range(x+waist-1, n):
    if arr[i][y-2] == "*":
        left_leg += 1

right_leg = 0
for i in range(x+waist-1, n):
    if arr[i][y] == "*":
        right_leg += 1

sys.stdout.write(f"{x} {y}\n")
sys.stdout.write(f"{left_arm} {right_arm} {waist} {left_leg} {right_leg}\n")