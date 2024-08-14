import sys

n = int(sys.stdin.readline())
cnt = 0

for i in range(1, n+1):
    if i < 100:
        cnt += 1
    elif i < 1000:
        if (i//100)%10 - (i//10)%10 == (i//10)%10 - i%10:
            cnt += 1
    else:
        if i//1000 - (i//100)%10 == (i//100)%10 - (i//10)%10 == (i//10)%10 - i%10:
            cnt += 1

sys.stdout.write(f"{cnt}\n")