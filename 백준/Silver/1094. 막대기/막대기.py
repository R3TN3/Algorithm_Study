import sys

x = int(sys.stdin.readline())
length = 64
cnt = 0

while x:
    if length > x:
        length //= 2
    else:
        x -= length
        cnt += 1

sys.stdout.write(f"{cnt}\n")