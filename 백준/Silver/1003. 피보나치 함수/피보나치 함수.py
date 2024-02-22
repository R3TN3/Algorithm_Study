import sys

t = int(sys.stdin.readline())

for i in range(t):
  n = int(sys.stdin.readline())

  zero, one = 1, 1

  if n == 0:
    zero, one = 1, 0
  elif n == 1:
    zero, one = 0, 1
  else:
    for j in range(2, n):
      zero, one = one, zero + one

  sys.stdout.write(str(zero) + " " + str(one) + "\n")