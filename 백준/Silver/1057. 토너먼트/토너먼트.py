import sys

n, kim, yim = map(int, sys.stdin.readline().split())
cnt = 0

while kim != yim:
    kim -= kim // 2
    yim -= yim // 2
    cnt += 1

sys.stdout.write(f"{cnt}\n")