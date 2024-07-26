import sys

x = int(sys.stdin.readline())
cnt = 1
add_num = 2

while True:
    if cnt >= x:
        break

    cnt += add_num
    add_num += 1

if add_num % 2 == 0:
    numer = cnt - x + 1
    deno = x - cnt + add_num - 1
else:
    numer = x - cnt + add_num - 1
    deno = cnt - x + 1

sys.stdout.write(f"{numer}/{deno}\n")