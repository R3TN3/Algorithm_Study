import sys

n, m = map(int, sys.stdin.readline().split())
arr = []
cnt = []

for _ in range(n):
    arr.append(sys.stdin.readline().rstrip())

for i in range(n-7):
    for j in range(m-7):
        b_cnt = 0
        w_cnt = 0

        for k in range(i, i+8):
            for l in range(j, j+8):
                if (k+l) % 2 == 0:
                    if arr[k][l] != "B":
                        b_cnt += 1
                    if arr[k][l] != "W":
                        w_cnt += 1
                else:
                    if arr[k][l] != "W":
                        b_cnt += 1
                    if arr[k][l] != "B":
                        w_cnt += 1

        cnt.append(b_cnt)
        cnt.append(w_cnt)
        
sys.stdout.write(f"{min(cnt)}\n")