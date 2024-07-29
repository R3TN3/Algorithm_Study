import sys

n, m = map(int, sys.stdin.readline().split())
sys.stdout.write(f"{abs(n-m)}\n")