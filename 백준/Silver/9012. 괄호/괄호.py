n = int(input())

for i in range(n):
  s = input()

  while s.count("()") > 0:
    s = s.replace("()", "")

  if len(s) == 0:
    print("YES")
  else:
    print("NO")