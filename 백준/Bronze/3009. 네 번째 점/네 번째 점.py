import sys

x = [0] * 3
y = [0] * 3

for i in range(3):
    x[i], y[i] = map(int, sys.stdin.readline().split())

for i in range(3):
    if x.count(x[i]) == 1:
        sys.stdout.write(str(x[i]) + " ")
        break

for i in range(3):
    if y.count(y[i]) == 1:
        sys.stdout.write(str(y[i]) + "\n")
        break