import sys

t = int(sys.stdin.readline())

for i in range(t):
    s = sys.stdin.readline().split()
    for i in s:
        sys.stdout.write(i[::-1] + " ")
    sys.stdout.write("\n")