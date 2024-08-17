import sys

t = int(sys.stdin.readline())

for i in range(t):
    n = int(sys.stdin.readline())

    if n <= 1:
        sys.stdout.write("2\n")
    else:
        while True:
            for j in range(2, int(n**0.5)+1):
                if n % j == 0:
                    n += 1
                    break
            else:
                sys.stdout.write(f"{n}\n")
                break