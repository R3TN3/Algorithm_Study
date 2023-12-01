n = int(input())
list_n = set(map(int, input().split()))
m = int(input())
list_m = list(map(int, input().split()))

for i in list_m:
  if i in list_n:
    print(1)
  else:
    print(0)