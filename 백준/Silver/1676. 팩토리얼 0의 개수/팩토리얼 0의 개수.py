import sys

n = int(sys.stdin.readline())
fac = 1
cnt = 0

for i in range(n, 0, -1):
  fac *= i

for i in range(-1, -len(str(fac))-1, -1):
  if str(fac)[i] == '0':
    cnt += 1
    continue
  else:
    print(cnt)
    break