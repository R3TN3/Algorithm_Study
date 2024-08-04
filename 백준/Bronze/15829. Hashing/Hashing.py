import sys

n = int(sys.stdin.readline())
s = sys.stdin.readline().rstrip()
nums = 0

for i in range(len(s)):
    nums += (ord(s[i]) - 96) * 31**i

sys.stdout.write(f"{nums % 1234567891}\n")