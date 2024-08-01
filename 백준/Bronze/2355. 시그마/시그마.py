import sys

a, b = map(int, sys.stdin.readline().split())

nums = ((a+b) * (abs(b-a)+1))//2
sys.stdout.write(f"{nums}\n")