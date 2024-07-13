import sys

x, y = map(int, sys.stdin.readline().split())
sum = 0

x -= 1
while x:
    if x in [1, 3, 5, 7, 8, 10, 12]:
        sum += 31
    elif x in [4, 6, 9, 11]:
        sum += 30
    else:
        sum += 28
        
    x -= 1

sum += y

if sum % 7 == 1:
    sys.stdout.write("MON")
elif sum % 7 == 2:
    sys.stdout.write("TUE")
elif sum % 7 == 3:
    sys.stdout.write("WED")
elif sum % 7 == 4:
    sys.stdout.write("THU")
elif sum % 7 == 5:
    sys.stdout.write("FRI")
elif sum % 7 == 6:
    sys.stdout.write("SAT")
else:
    sys.stdout.write("SUN")