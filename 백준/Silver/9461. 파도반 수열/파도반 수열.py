def pad(x):
  a, b, c = 1, 1, 1

  if x == 1 or x == 2:
    return a
  else:
    for i in range(x - 2):
      if i % 3 == 0:
        c += a
      elif i % 3 == 1:
        a += b
      else:
        b += c
    
    if (x - 2) % 3 == 0:
      return a
    elif (x - 2) % 3 == 1:
      return b
    else:
      return c


t = int(input())

for i in range(t):
  n = int(input())
  print(pad(n))