import sys

n = int(sys.stdin.readline())
cnt = 0
title = 0

while cnt < n:
    title += 1
    
    if "666" in str(title):
        cnt += 1
    
sys.stdout.write(f"{title}\n")