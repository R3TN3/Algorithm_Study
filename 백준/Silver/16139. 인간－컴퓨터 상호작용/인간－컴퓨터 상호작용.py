import sys

s = sys.stdin.readline().rstrip()
q = int(sys.stdin.readline())

for _ in range(q):
    a, l, r = map(str, sys.stdin.readline().split())
    l, r = int(l), int(r)
    sys.stdout.write(f"{s[l:r+1].count(a)}\n")