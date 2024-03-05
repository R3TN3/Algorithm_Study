import sys

n = int(sys.stdin.readline())
k = int(sys.stdin.readline())
start, end = 1, k
answer = 0

while start <= end:
  mid = (start + end) // 2
  cnt = 0

  for i in range(1, n+1):
    cnt += min(mid // i, n)

  if cnt >= k:
    end = mid -1
    answer = mid
  else:
    start = mid + 1

sys.stdout.write(str(answer) + "\n")