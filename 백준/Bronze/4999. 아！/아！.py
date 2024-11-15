import sys

jaeHwan = sys.stdin.readline().rstrip()
doctor = sys.stdin.readline().rstrip()

if len(jaeHwan) >= len(doctor):
    sys.stdout.write("go\n")
else:
    sys.stdout.write("no\n")