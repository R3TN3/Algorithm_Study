n = int(input())

tmp = []
for i in range(1, n+1):
  tmp.append(i)

while len(tmp) > 0:
  print(tmp.pop(0), end = " ")
  if len(tmp) > 1:
    tmp.append(tmp.pop(0))