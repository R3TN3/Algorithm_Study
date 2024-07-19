import sys

s = sys.stdin.readline()

for i in s:
    if 65 <= ord(i) <= 90:
        if ord(i) + 13 > 90:
            sys.stdout.write(chr(ord(i) + 13 - 26))
        else:
            sys.stdout.write(chr(ord(i) + 13))
    elif 97 <= ord(i) <= 122:
        if ord(i) + 13 > 122:
            sys.stdout.write(chr(ord(i) + 13 - 26))
        else:
            sys.stdout.write(chr(ord(i) + 13))
    else:
        sys.stdout.write(i)