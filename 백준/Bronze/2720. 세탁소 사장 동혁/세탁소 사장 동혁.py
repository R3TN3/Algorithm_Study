import sys

t = int(sys.stdin.readline())
money = [25, 10, 5, 1]

for i in range(t):
    c = int(sys.stdin.readline())
    
    for j in range(4):
        sys.stdout.write(f"{c // money[j]} ")
        c %= money[j];
    sys.stdout.write("\n")