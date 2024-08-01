import sys

price = 0
nums = list(map(int,sys.stdin.readline().split()))
b_list = list(map(int,sys.stdin.readline().split()))
c_list = list(map(int,sys.stdin.readline().split()))
d_list = list(map(int,sys.stdin.readline().split()))

sys.stdout.write(f"{sum(b_list) + sum(c_list) + sum(d_list)}\n")

b_list = sorted(b_list, reverse=True)
c_list = sorted(c_list, reverse=True)
d_list = sorted(d_list, reverse=True)

for i in range(min(nums)):
    price += int((b_list.pop(0) + c_list.pop(0) + d_list.pop(0)) * 0.9)

price += sum(b_list) + sum(c_list) + sum(d_list)

sys.stdout.write(f"{price}\n");