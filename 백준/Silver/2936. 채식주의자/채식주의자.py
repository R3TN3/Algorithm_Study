import sys

a, b = map(int, sys.stdin.readline().split())
area = 31250

if a == 0:
    if b == 250:
        x, y = 125, 0
    else:
        if b < 125:
            x = (area//2) * 2 / (250-b)
            y = -x + 250
        else:
            x, y = area/b, 0
elif b == 0:
    if a == 250:
        x, y = 0, 125
    else:
        if a < 125:
            y = (area//2) * 2 / (250-a)
            x = -y + 250
        else:
            x, y = 0, area/a
else:
    if a > 125:
        x = 0
        y = 250-((area//2) * 2 / a)
    else:
        x = 250-((area//2) * 2 / b)
        y = 0
    
sys.stdout.write(f"{x:.2f} {y:.2f}\n")