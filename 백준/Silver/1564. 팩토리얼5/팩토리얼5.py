import sys

n = int(sys.stdin.readline())
ans = 1

for i in range(2, n+1):
    ans *= i

    while str(ans)[-1] == "0":
        ans //= 10
        
    ans %= 1000000000000

sys.stdout.write(f"{str(ans)[-5:]}\n")