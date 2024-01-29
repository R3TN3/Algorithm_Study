import sys

k = int(input())

width = []
length = []
area = 0

for i in range(6):
  a, b = map(int, sys.stdin.readline().split())
  if i % 2 == 0:
    width.append(b)
  else:
    length.append(b)

for i in range(3):
  if width[i-1] == max(width) or width[i] == max(width):
    continue
  else:
    if i + 1 >= 3:
      length.append(length[0])
    area += width[i-1] * length[i-2] + width[i] * length[i]

print(k * area)