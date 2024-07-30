import sys

side = list(map(int, sys.stdin.readline().split()))

if max(side) >= sum(side) - max(side):
    side[side.index(max(side))] = sum(side) - max(side) - 1

sys.stdout.write(f"{sum(side)}\n")