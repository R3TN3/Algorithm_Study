import sys

n = int(sys.stdin.readline())
tmp = []

for i in range(n):
  a, b = list(map(int, sys.stdin.readline().split()))
  tmp.append([a, b])

tmp.sort(key=lambda x: (x[1], x[0]))

for i in tmp:
  sys.stdout.write(f"{i[0]} {i[1]}\n")