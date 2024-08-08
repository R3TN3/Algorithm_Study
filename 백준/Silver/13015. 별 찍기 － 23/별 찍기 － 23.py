import sys

n = int(sys.stdin.readline())

sys.stdout.write("*" * n + " " * (2*n - 3) + "*" * n + "\n")

for i in range(1, n-1):
    sys.stdout.write(" " * (i) + "*" + " " * (n-2) + "*" + " " * (2*n - 3 - 2*i) + "*" + " " * (n-2) + "*" + "\n")

sys.stdout.write(" " * (n-1) + "*" + " " * (n-2) + "*" + " " * (n-2) + "*" + "\n")

for i in range(n-2, 0, -1):
    sys.stdout.write(" " * (i) + "*" + " " * (n-2) + "*" + " " * (2*n - 3 - 2*i) + "*" + " " * (n-2) + "*" + "\n")

sys.stdout.write("*" * n + " " * (2*n - 3) + "*" * n + "\n")