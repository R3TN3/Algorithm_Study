import sys

self_num = set(range(1, 10001))

for i in range(1, 10001):
    num = i
    tmp = num

    while tmp:
        num += tmp % 10
        tmp //= 10
        
    if num in self_num:
        self_num.remove(num)

for i in sorted(self_num):
    sys.stdout.write(f"{i}\n")