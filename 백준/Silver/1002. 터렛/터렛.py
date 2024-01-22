def potential(x1, y1, r1, x2, y2, r2):
  dist = ((x2 - x1)**2 + (y2 - y1)**2)**(1/2)

  if x1 == x2 and y1 == y2:
    if r1 == r2:
      return -1
    else:
      return 0
      
  elif dist < r1 or dist < r2:
    if dist == abs(r1 - r2):
      return 1
    elif dist > abs(r1 - r2):
      return 2
    else:
      return 0
      
  else:
    if dist == r1 + r2:
      return 1
    elif dist < r1 + r2:
      return 2
    else:
      return 0


n = int(input())

for i in range(n):
  x1, y1, r1, x2, y2, r2 = map(int, input().split())

  print(potential(x1, y1, r1, x2, y2, r2))