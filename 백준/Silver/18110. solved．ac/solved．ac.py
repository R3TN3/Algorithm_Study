import sys

n = int(sys.stdin.readline())
if n == 0:
    sys.stdout.write("0\n")
else:
    arr = []
    
    for _ in range(n):
        arr.append(int(sys.stdin.readline()))
    
    arr = sorted(arr)
    cnt = int(n*0.15 + 0.5)

    sys.stdout.write(f"{int(sum(arr[cnt:n-cnt]) / len(arr[cnt:n-cnt]) + 0.5)}\n")