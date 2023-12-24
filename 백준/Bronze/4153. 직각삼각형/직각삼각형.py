while True:
  s = list(map(int, input().split()))
  s.sort()

  a, b, c = s[0], s[1], s[2]
  if a == 0 and b == 0 and c == 0:
    break

  if c**2 == a**2 + b**2:
    print("right")
  else:
    print("wrong")