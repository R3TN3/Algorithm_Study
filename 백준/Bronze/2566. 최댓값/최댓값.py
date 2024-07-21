import sys

max_num = -1
max_index = [0, 0]

for i in range(9):
    tmp = list(map(int, sys.stdin.readline().split()))
    
    if max(tmp) > max_num:
        max_num = max(tmp)
        max_index[0] = i+1
        max_index[1] = tmp.index(max(tmp)) + 1

sys.stdout.write(f"{max_num}\n")
sys.stdout.write(f"{max_index[0]} {max_index[1]}\n")