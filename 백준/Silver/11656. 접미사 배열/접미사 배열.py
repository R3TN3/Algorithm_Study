import sys

s = sys.stdin.readline().rstrip()
arr = []

for i in range(len(s)):
  arr.append(s)
  s = s[1:]

arr.sort()
for i in arr:
  sys.stdout.write(i + "\n")