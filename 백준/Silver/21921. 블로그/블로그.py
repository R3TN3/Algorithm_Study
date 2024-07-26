import sys

n, x = map(int, sys.stdin.readline().split())
people = list(map(int, sys.stdin.readline().split()))
max_people = sum(people[:x])
current_people = max_people
cnt = 1

for i in range(1, n-x+1):
    current_people = current_people - people[i-1] + people[i+x-1]
    if current_people > max_people:
        max_people = current_people
        cnt = 1
    elif current_people == max_people:
        cnt += 1

if max_people != 0:
    sys.stdout.write(f"{max_people}\n")
    sys.stdout.write(f"{cnt}\n")
else:
    sys.stdout.write("SAD\n")