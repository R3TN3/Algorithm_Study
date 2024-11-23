import sys

a, b, c = map(int, sys.stdin.readline().split())

sys.stdout.write(f"{pow(a, b, c)}")