import sys

L = int(sys.stdin.readline())

if L % 5:
    sys.stdout.write(f"{L//5 + 1}\n")
else:
    sys.stdout.write(f"{L//5}\n")