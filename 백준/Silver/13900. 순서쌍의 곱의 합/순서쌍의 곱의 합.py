import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

ans = (sum(arr)**2 - sum(i*i for i in arr)) // 2
sys.stdout.write(f"{ans}\n")