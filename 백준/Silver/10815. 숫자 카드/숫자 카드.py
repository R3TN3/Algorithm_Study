import sys

def binary_search(arr, target):
  left, right = 0, len(arr) - 1

  while left <= right:
    mid = (left + right) // 2

    if arr[mid] == target:
      return mid
    elif arr[mid] > target:
      right = mid - 1
    else:
      left = mid + 1

  return -1

n = int(input())
arr_1 = list(map(int, sys.stdin.readline().split()))
arr_1.sort()

m = int(input())
arr_2 = list(map(int, sys.stdin.readline().split()))

for i in arr_2:
  if binary_search(arr_1, i) != -1:
    print(1, end=" ")
  else:
    print(0, end=" ")