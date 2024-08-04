import sys
from collections import deque

n = int(sys.stdin.readline())
queue = deque()

for _ in range(n):
    command = sys.stdin.readline().split()

    if command[0] == "push":
        queue.append(command[1])
    elif command[0] == "pop":
        if len(queue) == 0:
            sys.stdout.write("-1\n")
        else:
            sys.stdout.write(f"{queue.popleft()}\n")
    elif command[0] == "size":
        sys.stdout.write(f"{len(queue)}\n")
    elif command[0] == "empty":
        if len(queue) == 0:
            sys.stdout.write("1\n")
        else:
            sys.stdout.write("0\n")
    elif command[0] == "front":
        if len(queue) == 0:
            sys.stdout.write("-1\n")
        else:
            sys.stdout.write(f"{queue[0]}\n")
    elif command[0] == "back":
        if len(queue) == 0:
            sys.stdout.write("-1\n")
        else:
            sys.stdout.write(f"{queue[-1]}\n")