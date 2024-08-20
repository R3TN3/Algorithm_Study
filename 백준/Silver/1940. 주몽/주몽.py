import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

arr = sorted(arr)
cnt = 0
left, right = 0, len(arr)-1

while left < right:
    num = arr[left] + arr[right]

    if num < m:
        left += 1
    elif num > m:
        right -= 1
    else:
        cnt += 1
        left += 1
        right -= 1

sys.stdout.write(f"{cnt}\n")