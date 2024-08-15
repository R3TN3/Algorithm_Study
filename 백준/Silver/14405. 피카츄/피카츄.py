import sys

s = sys.stdin.readline().rstrip()
check = ["pi", "ka", "chu"]

for i in range(3):
    s = s.replace(check[i], " ")

if len(s.strip()) == 0:
    sys.stdout.write("YES\n")
else:
    sys.stdout.write("NO\n")