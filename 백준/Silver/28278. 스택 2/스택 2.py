import sys

n = int(sys.stdin.readline())
stack = []

for i in range(n):
    command = list(map(int, sys.stdin.readline().split()))

    if command[0] == 1:
        stack.append(command[1])
    elif command[0] == 2:
        if stack:
            sys.stdout.write(f"{stack.pop()}\n")
        else:
            sys.stdout.write("-1\n")
    elif command[0] == 3:
        sys.stdout.write(f"{len(stack)}\n")
    elif command[0] == 4:
        if len(stack) == 0:
            sys.stdout.write("1\n")
        else:
            sys.stdout.write("0\n")
    elif command[0] == 5:
        if stack:
            sys.stdout.write(f"{stack[-1]}\n")
        else:
            sys.stdout.write("-1\n")