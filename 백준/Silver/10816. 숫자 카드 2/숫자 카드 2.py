import sys

n = int(sys.stdin.readline())
tmp = list(map(int, sys.stdin.readline().split()))
arr = {}

for i in tmp:
    if i in arr:
        arr[i] += 1
    else:
        arr[i] = 1

m = int(sys.stdin.readline())
check = list(map(int, sys.stdin.readline().split()))

for i in check:
    if i in arr:
        sys.stdout.write(f"{arr[i]} ")
    else:
        sys.stdout.write("0 ")