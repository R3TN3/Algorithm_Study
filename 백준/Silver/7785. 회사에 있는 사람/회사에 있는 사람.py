import sys

n = int(sys.stdin.readline())
company = set()

for i in range(n):
  command = sys.stdin.readline().split()

  if command[1] == "enter":
    company.add(command[0])

  elif command[1] == "leave":
    company.remove(command[0])

company = sorted(company)

for i in range(len(company)-1, -1, -1):
  sys.stdout.write(company[i] + "\n")