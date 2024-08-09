import sys

n = int(sys.stdin.readline())
arr = set()
exist = False

for i in range(n):
    a, b = map(str, sys.stdin.readline().split())
    
    if a == "ChongChong" or b == "ChongChong":
        exist = True
        arr.add(a)
        arr.add(b)
        continue

    if exist:
        if a in arr or b in arr:
            arr.add(a)
            arr.add(b)

sys.stdout.write(f"{len(arr)}\n")