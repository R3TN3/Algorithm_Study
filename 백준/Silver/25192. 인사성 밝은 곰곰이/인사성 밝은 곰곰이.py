import sys

arr = set()
cnt = 0

n = int(sys.stdin.readline())

for i in range(n):
    sen = sys.stdin.readline().rstrip()
    if sen == "ENTER":
        arr.clear()
    elif sen not in arr:
        arr.add(sen)
        cnt += 1

sys.stdout.write(f"{cnt}\n")