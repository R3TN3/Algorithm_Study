import sys

t = int(sys.stdin.readline())

for i in range(t):
    s, p = map(str, sys.stdin.readline().split())
    cnt = 0

    if p in s:
        cnt = s.count(p)
        s = s.replace(p, "")
        
    sys.stdout.write(str(cnt + len(s)) + "\n")