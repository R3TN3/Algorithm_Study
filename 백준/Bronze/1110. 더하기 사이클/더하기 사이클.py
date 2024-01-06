s = int(input())

a = s // 10
b = s % 10
tmp = s
cnt = 0

while True:
  a, b = b, (a + b) % 10
  cnt += 1

  if tmp == a * 10 + b:
    break

print(cnt)