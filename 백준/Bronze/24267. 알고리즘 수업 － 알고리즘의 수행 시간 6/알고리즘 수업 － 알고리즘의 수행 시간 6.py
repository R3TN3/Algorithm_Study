import sys

n = int(sys.stdin.readline())
cnt = n * (n-1) * (n-2) // 6
degree = 3

sys.stdout.write(f"{cnt}\n")
sys.stdout.write(f"{degree}\n")