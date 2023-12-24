n = int(input())
s = list(map(int, input().split()))
cnt = 0

for i in range(n):
  tmp = 0
  if s[i] == 1:
    continue

  for j in range(2, s[i]):
    if s[i] % j == 0:
      tmp += 1
  if tmp == 0:
    cnt += 1

print(cnt)
