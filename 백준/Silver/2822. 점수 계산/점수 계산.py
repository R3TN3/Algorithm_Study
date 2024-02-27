arr = []
sum = 0
index_arr = []

for i in range(8):
  arr.append(int(input()))

sort_arr = sorted(arr, reverse=True)

for i in range(5):
  sum += sort_arr[i]
  index_arr.append(arr.index(sort_arr[i]) + 1)

index_arr.sort()

print(sum)

for i in index_arr:
  print(i, end=' ')