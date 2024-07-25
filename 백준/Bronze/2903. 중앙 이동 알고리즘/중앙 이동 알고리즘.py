import sys

n = int(sys.stdin.readline())
side = 2

for i in range(1, n+1):
    side += 2**(i-1)
    
sys.stdout.write(f"{side**2}\n")