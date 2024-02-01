check_arr = [1, 1, 2, 2, 2, 8]

arr = list(map(int, input().split()))

for i in range(6):
  print(check_arr[i] - arr[i], end = " ")