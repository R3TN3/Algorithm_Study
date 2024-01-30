import sys

check = ["(", ")", "[", "]"]

while True:
  s = sys.stdin.readline()
  tmp = ""

  if s[0] == ".":
    break

  for i in s:
    if i in check:
      tmp += i

  while "()" in tmp or "[]" in tmp:
    tmp = tmp.replace("()", "").replace("[]", "")

  if tmp == "":
    print("yes")
  else:
    print("no")