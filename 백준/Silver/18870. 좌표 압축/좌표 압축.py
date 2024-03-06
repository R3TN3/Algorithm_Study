import sys

def binary_search(arr, target):
  start, end = 0, len(arr) -1

  while start <= end:
    mid = (start + end) // 2

    if arr[mid] == target:
      return mid
    elif arr[mid] > target:
      end = mid - 1
    else:
      start = mid + 1

  return -1

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
arr_sort = sorted(set(arr))

for i in arr:
  sys.stdout.write(str(binary_search(arr_sort, i)) + " ")