import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
sort_a = sorted(a)

p = []
for i in range(n):
    p.append(sort_a.index(a[i]))
    sort_a[sort_a.index(a[i])] = 0

for i in p:
    sys.stdout.write(f"{i} ")