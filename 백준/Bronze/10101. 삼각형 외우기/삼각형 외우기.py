import sys

angle = []

for _ in range(3):
    angle.append(int(sys.stdin.readline()))

if sum(angle) != 180:
    sys.stdout.write("Error")
else:
    if angle[0] == angle[1] == angle[2]:
        sys.stdout.write("Equilateral")
    elif angle[0] != angle[1] and angle[0] != angle[2] and angle[1] != angle[2]:
        sys.stdout.write("Scalene")
    else:
        sys.stdout.write("Isosceles")