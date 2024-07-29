import sys

num = 0
max_num = 0

for i in range(4):
    out_num, in_num = map(int, sys.stdin.readline().split())
    num -= out_num
    num += in_num

    if num > max_num:
        max_num = num

sys.stdout.write(f"{max_num}\n")