import sys

n = int(sys.stdin.readline())
nums = []

for _ in range(n):
    s = sys.stdin.readline().strip()
    
    for i in range(len(s)):
        if s[i].isalpha():
            s = s.replace(s[i], " ")
            
    s = s.split()
    for i in s:
        nums.append(int(i))

nums = sorted(nums)
for i in nums:
    sys.stdout.write(f"{i}\n")