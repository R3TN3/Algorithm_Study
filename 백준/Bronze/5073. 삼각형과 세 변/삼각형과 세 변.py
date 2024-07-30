import sys

while True:
    side = list(map(int, sys.stdin.readline().split()))

    if side[0] == 0 and side[1] == 0 and side[2] == 0:
        break;

    if max(side) >= sum(side) - max(side):
        sys.stdout.write("Invalid\n")
    elif side[0] == side[1] == side[2]:
        sys.stdout.write("Equilateral\n")
    elif side[0] == side[1] or side[1] == side[2] or side[2] == side[0]:
        sys.stdout.write("Isosceles\n")
    else:
        sys.stdout.write("Scalene\n")
        