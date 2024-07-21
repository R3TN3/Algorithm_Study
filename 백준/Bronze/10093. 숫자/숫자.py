import sys

a, b = map(int, sys.stdin.readline().split())

if a < b:
    sys.stdout.write(f"{b-a-1}\n")
    
    for i in range(a+1, b):
        sys.stdout.write(f"{i} ")
elif b < a:
    sys.stdout.write(f"{a-b-1}\n")
    
    for i in range(b+1, a):
        sys.stdout.write(f"{i} ")
else:
    sys.stdout.write("0\n")