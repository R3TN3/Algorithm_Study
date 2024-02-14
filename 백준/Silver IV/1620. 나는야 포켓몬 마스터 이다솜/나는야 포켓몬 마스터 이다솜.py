import sys

n, m = map(int, sys.stdin.readline().split())

arr = {sys.stdin.readline().rstrip() : i+1 for i in range(n)}
arr_keys = list(arr.keys())

for i in range(m):
  prob = sys.stdin.readline().rstrip()

  try:
    sys.stdout.write(f"{arr[prob]}\n")
  except:
    sys.stdout.write(f"{arr_keys[int(prob) - 1]}\n")