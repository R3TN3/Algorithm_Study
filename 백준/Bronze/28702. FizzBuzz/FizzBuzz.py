import sys

arr = []
index = 0

for i in range(3):
    tmp = sys.stdin.readline().rstrip()
    if tmp.isdigit():
        tmp = int(tmp)
        index = i
    arr.append(tmp)

num = arr[index] + (3 - index)
if num % 3 == 0 and num % 5 != 0:
    sys.stdout.write("Fizz\n")
elif num % 3 != 0 and num % 5 == 0:
    sys.stdout.write("Buzz\n")
elif num % 3 == 0 and num % 5 == 0:
    sys.stdout.write("FizzBuzz\n")
else:
    sys.stdout.write(f"{num}\n")