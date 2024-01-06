s = input()
cro_alpha = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
cnt = 0

for i in cro_alpha:
  if i in s:
    cnt += s.count(i)
    s = s.replace(i, " ")

s = s.replace(" ", "")
print(cnt + len(s))