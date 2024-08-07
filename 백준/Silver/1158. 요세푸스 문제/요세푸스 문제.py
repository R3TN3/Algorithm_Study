import sys

n, k = map(int, sys.stdin.readline().split())
arr = list(range(1, n+1))
ans = []
cnt = 0

for i in range(n):
    cnt += k-1
    if cnt >= len(arr):
        cnt %= len(arr)

    ans.append(arr.pop(cnt))

sys.stdout.write("<" + ", ".join(map(str, ans)) + ">\n")