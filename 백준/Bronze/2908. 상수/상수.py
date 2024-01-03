a, b = input().split()

reverse_a = "".join(reversed(a))
reverse_b = "".join(reversed(b))
reverse_a = int(reverse_a)
reverse_b = int(reverse_b)

if reverse_a > reverse_b:
  print(reverse_a)
else:
  print(reverse_b)