import sys

n = int(sys.stdin.readline())
sum = 1

for i in range(1, n+1):
  sum *= i
  sum = str(sum).rstrip("0")
  sum = int(sum) % 1000000

sys.stdout.write(str(sum)[-1] +"\n")