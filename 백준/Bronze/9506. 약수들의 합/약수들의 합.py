import sys

while True:
    n = int(sys.stdin.readline())
    divisor = []
    sum_divisor = 0

    if n == -1:
        break
    
    for i in range(1, n):
        if n % i == 0:
            divisor.append(i)
            sum_divisor += i

    if n == sum_divisor:
        sys.stdout.write(f"{n} = 1")
        for i in range(1, len(divisor)):
            sys.stdout.write(f" + {divisor[i]}")
        sys.stdout.write("\n")
    else:
        sys.stdout.write(f"{n} is NOT perfect.\n")