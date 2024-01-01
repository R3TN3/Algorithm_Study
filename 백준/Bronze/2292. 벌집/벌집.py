n = int(input())
k = 1
s = 3 * k**2 - 3 * k + 1

while n > s:
  k += 1
  s = 3 * k**2 - 3 * k + 1

print(k)