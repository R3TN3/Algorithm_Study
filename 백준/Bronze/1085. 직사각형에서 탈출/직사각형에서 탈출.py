x, y, w, h = map(int, input().split())
center_x = w / 2
center_y = h / 2

if center_x - abs(x - center_x) < center_y - abs(y - center_y):
  print(int(center_x - abs(x - center_x)))
else:
  print(int(center_y - abs(y - center_y)))