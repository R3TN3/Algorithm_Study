import sys

e, s, m = map(int, sys.stdin.readline().split())
cnt_e, cnt_s, cnt_m = 1, 1, 1
year = 1

while True:
    if e == cnt_e and s == cnt_s and m == cnt_m:
        break

    year += 1; cnt_e += 1; cnt_s += 1; cnt_m += 1
    if cnt_e > 15: cnt_e = 1
    if cnt_s > 28: cnt_s = 1
    if cnt_m > 19: cnt_m = 1

sys.stdout.write(f"{year}\n")