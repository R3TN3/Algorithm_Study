n = int(input())
tmp = [0] * n
s = ""

for i in range(n):
  tmp[i] = int(input())

tmp.sort()

for i in range(n):
  s += (str(tmp[i]) + "\n")

print(s)