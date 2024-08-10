import sys

n = sys.stdin.readline().rstrip()
cnt = 0
arr = [0] * 10

for i in n:
    if i == "6" or i == "9":
        if arr[6] <= arr[9]:
            arr[6] += 1
        else:
            arr[9] += 1
    else:
        arr[int(i)] += 1

sys.stdout.write(f"{max(arr)}\n")