t = int(input())

for i in range(t):
  h, w, n = map(int, input().split())
  floar = n % h
  room = n // h + 1

  if floar == 0:
    floar = h
    room -= 1
  print(floar * 100 + room)