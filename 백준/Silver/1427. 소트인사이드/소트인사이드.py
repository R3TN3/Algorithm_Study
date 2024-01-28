n = input()
arr = []
s = ""

for i in range(len(n)):
  arr.append(n[i])

arr.sort()
arr.reverse()

for i in range(len(n)):
  s += arr[i]
  
print(s)