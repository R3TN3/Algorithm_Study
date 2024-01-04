s = input()
s_len = len(s)

for i in range(len(s) // 10 + 1):
  print(s[i * 10:(i + 1) * 10])