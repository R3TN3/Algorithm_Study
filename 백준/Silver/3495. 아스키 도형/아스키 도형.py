import sys

h, w = map(int, sys.stdin.readline().split())
cnt = 0

for i in range(h):
  s = sys.stdin.readline().rstrip()
  s = s.strip(".")

  tmp = False
  for j in range(len(s)):
    if s[j] == "/" or s[j] == "\\":
      cnt += 0.5
      tmp = not tmp
        
    elif tmp:
      cnt += 1

sys.stdout.write(str(int(cnt)) + "\n")