s = input()
num = 0

if s[0] == "A":
  num += 4
elif s[0] == "B":
  num += 3
elif s[0] == "C":
  num += 2
elif s[0] == "D":
  num += 1
else:
  print(f"{num:.1f}")
  exit()

if s[1] == "+":
  num += 0.3
elif s[1] == "-":
  num -= 0.3

print(f"{num:.1f}")