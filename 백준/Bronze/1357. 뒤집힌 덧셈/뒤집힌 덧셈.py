import sys

x, y = map(str, sys.stdin.readline().split())
reversed_x = ""
reversed_y = ""
reversed_sum = ""

for i in x:
    reversed_x = i + reversed_x

for i in y:
    reversed_y = i + reversed_y

sum = str(int(reversed_x) + int(reversed_y))

for i in sum:
    reversed_sum = i + reversed_sum

sys.stdout.write(str(int(reversed_sum)))