import sys

n, m = map(int, sys.stdin.readline().split())
arr = {}

for i in range(n):
  adress, pw = sys.stdin.readline().split()
  arr[adress] = pw

for i in range(m):
  adress = sys.stdin.readline().rstrip()
  sys.stdout.write(f"{arr[adress]}\n")