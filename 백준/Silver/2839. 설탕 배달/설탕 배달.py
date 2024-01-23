n = int(input())
cnt = n // 5

for i in range(cnt, -1, -1):
  if (n - i * 5) % 3 == 0:
    print(i + (n - i * 5) // 3)
    break
else:
  print(-1)