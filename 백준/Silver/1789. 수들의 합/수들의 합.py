import sys

s = int(sys.stdin.readline())
x = 1
cnt = 0

while x <= s:
    s -= x
    x += 1
    cnt += 1

sys.stdout.write(f"{cnt}\n")