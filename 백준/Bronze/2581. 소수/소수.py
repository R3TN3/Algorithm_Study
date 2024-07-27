import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
prime_min = m
prime_sum = 0


for i in range(n, m+1):
    if i == 1:
        continue

    for j in range(2, i):
        if i % j == 0:
            break
    else:
        if (i < prime_min):
            prime_min = i
        prime_sum += i

if prime_sum == 0:
    sys.stdout.write("-1\n")
else:
    sys.stdout.write(f"{prime_sum}\n")
    sys.stdout.write(f"{prime_min}\n")