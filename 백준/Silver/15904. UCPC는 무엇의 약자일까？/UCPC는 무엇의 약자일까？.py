import sys

s = sys.stdin.readline().rstrip()
target = ["U", "C", "P", "C"]
ans = ""
cnt = 0

for i in s:
  if i.isupper() and (i == "U" or i == "C" or i == "P"):
    ans += i

for i in ans:
  if cnt == 4:
    break
  if i == target[cnt]:
    cnt += 1

if cnt == 4:
  sys.stdout.write("I love UCPC")
else:
  sys.stdout.write("I hate UCPC")