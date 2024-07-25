import sys

a, b = map(str, sys.stdin.readline().split())

a = a.replace('6', '5')
b = b.replace('6', '5')
sys.stdout.write(f"{int(a) + int(b)} ")

a = a.replace('5', '6')
b = b.replace('5', '6')
sys.stdout.write(f"{int(a) + int(b)}\n")