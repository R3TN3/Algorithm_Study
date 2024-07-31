import sys

n = int(sys.stdin.readline())
a, b = map(int, sys.stdin.readline().split())
cnt = a // 2 + b

if cnt < n:
    sys.stdout.write(f"{cnt}\n")
else:
    sys.stdout.write(f"{n}\n");