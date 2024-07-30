import sys

n = int(sys.stdin.readline())
cnt = (n-1)*n//2
degree = 2

sys.stdout.write(f"{cnt}\n")
sys.stdout.write(f"{degree}\n")