import sys

n, b = map(str, sys.stdin.readline().split())
b = int(b)
arr = []
sum = 0

for i in range(0, 10):
    arr.append(str(i))

for i in range(ord('A'), ord('Z')+1):
    arr.append(chr(i))

for i in range(len(n)):
    sum += arr.index(n[-i-1]) * (b ** i)

sys.stdout.write(f"{sum}\n")