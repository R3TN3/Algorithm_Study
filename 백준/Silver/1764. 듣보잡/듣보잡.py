import sys

n, m = map(int, sys.stdin.readline().split())
no_listen = set()
no_see = set()

for i in range(n):
  no_listen.add(sys.stdin.readline().rstrip())

for i in range(m):
  no_see.add(sys.stdin.readline().rstrip())

no_listen_see = no_listen & no_see
no_listen_see = sorted(no_listen_see)

sys.stdout.write(f"{len(no_listen_see)}\n")

for i in no_listen_see:
  sys.stdout.write(i + "\n")