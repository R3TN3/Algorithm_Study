def ccw(x1, y1, x2, y2, x3, y3):
  return (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1)

p1 = list(map(int, input().split()))
p2 = list(map(int, input().split()))
p3 = list(map(int, input().split()))

result = ccw(p1[0], p1[1], p2[0], p2[1], p3[0], p3[1])

if result > 0:
  print(1)
elif result < 0:
  print(-1)
else:
  print(0)