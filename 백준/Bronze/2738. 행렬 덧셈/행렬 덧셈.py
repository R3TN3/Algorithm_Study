import sys

n, m = map(int, sys.stdin.readline().split())
a = []
b = []

for i in range(n):
    tmp = list(map(int, sys.stdin.readline().split()))
    a.append(tmp)

for i in range(n):
    tmp = list(map(int, sys.stdin.readline().split()))
    b.append(tmp)
    
for i in range(n):
    for j in range(m):
        a[i][j] = a[i][j] + b[i][j]

for i in a:
    for j in i:
        sys.stdout.write(str(j) + " ")
    sys.stdout.write("\n")