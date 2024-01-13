import sys

n = int(sys.stdin.readline())
tmp_5 = n // 5

for i in range(tmp_5, -1, -1):
  if (n - i * 5) % 2 == 0:
    print(i + (n - i * 5) // 2)
    break
else:
  print(-1)