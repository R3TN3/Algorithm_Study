a = input().upper()
b = sorted(set(a))
b = ''.join(b)

n = 0
tmp_count = a.count(b[0])
tmp = b[0]

for i in range(1, len(b)):
  if a.count(b[i]) > tmp_count:
    tmp_count = a.count(b[i])
    tmp = b[i]
    n = 0
  elif a.count(b[i]) == tmp_count:
    n += 1

if n != 0:
  print("?")
else:
  print(tmp)