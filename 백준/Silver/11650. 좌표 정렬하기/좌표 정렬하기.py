import sys

n = int(input())
tmp = []

for i in range(n):
  a, b = list(map(int, sys.stdin.readline().split()))
  tmp.append([a, b])

tmp.sort(key = lambda x : x[1])
tmp.sort(key = lambda x : x[0])

for i in tmp:
  print(i[0], i[1])