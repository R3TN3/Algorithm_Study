import sys

n, m = map(int, sys.stdin.readline().split())
cnt = 0
arr = set()

for _ in range(n):
    arr.add(sys.stdin.readline().strip())

for _ in range(m):
    s = sys.stdin.readline().strip()
    if s in arr:
        cnt += 1

sys.stdout.write(f"{cnt}\n")