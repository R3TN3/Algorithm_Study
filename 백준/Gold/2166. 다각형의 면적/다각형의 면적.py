import sys

def ccw(x1, y1, x2, y2, x3, y3):
    return x1*y2 + x2*y3 + x3*y1 - y1*x2 - y2*x3 - y3*x1;

n = int(sys.stdin.readline())
arr = []
area = 0

for _ in range(n):
    arr.append(list(map(int, sys.stdin.readline().split())))

for i in range(1, n-1):
    area += ccw(arr[0][0], arr[0][1], arr[i][0], arr[i][1], arr[i+1][0], arr[i+1][1])

sys.stdout.write(f"{abs(area)/2:.1f}\n")