import sys

n = int(sys.stdin.readline())
size_list = list(map(int, sys.stdin.readline().split()))
t, p = map(int, sys.stdin.readline().split())

for i in range(6):
    if size_list[i] == 0:
        continue
    else:
        if size_list[i] % t == 0:
            size_list[i] = size_list[i] // t
        else:
            size_list[i] = size_list[i] // t + 1

sys.stdout.write(f"{sum(size_list)}\n")
sys.stdout.write(f"{n//p} {n%p}\n")