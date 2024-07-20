import sys

odds = []

for _ in range(7):
    num = int(sys.stdin.readline())
    if num % 2 != 0:
        odds.append(num)

if len(odds) == 0:
    sys.stdout.write(f"-1\n")
else:
    sys.stdout.write(f"{sum(odds)}\n")
    sys.stdout.write(f"{min(odds)}\n")