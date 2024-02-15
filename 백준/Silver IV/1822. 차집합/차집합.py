import sys

n, m = map(int, sys.stdin.readline().split())

arr_a = set(map(int, sys.stdin.readline().split()))
arr_b = set(map(int, sys.stdin.readline().split()))

difference_set = sorted(arr_a - arr_b)

if len(difference_set) == 0:
  sys.stdout.write(str(0))
else:
  sys.stdout.write(f"{len(difference_set)}\n")
  
  for i in difference_set:
    sys.stdout.write(f"{i} ")