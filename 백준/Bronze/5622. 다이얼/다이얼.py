import sys

s = sys.stdin.readline()
tmp = 0

for i in s:
    if i in "ABC":
        tmp += 3
    elif i in "DEF":
        tmp += 4
    elif i in "GHI":
        tmp += 5
    elif i in "JKL":
        tmp += 6
    elif i in "MNO":
        tmp += 7
    elif i in "PQRS":
        tmp += 8
    elif i in "TUV":
        tmp += 9
    elif i in "WXYZ":
        tmp += 10

sys.stdout.write(str(tmp))