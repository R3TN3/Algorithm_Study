import sys

s = list(map(str, sys.stdin.readline().split("-")))

for i in range(len(s)):
    s[i] = list(map(int, s[i].split("+")))

nums = sum(s[0])

for i in range(1, len(s)):
    nums -= sum(s[i])

sys.stdout.write(f"{nums}\n")