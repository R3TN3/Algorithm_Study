import sys

n = int(sys.stdin.readline())
cnt = 0

for _ in range(n):
    s = sys.stdin.readline().strip()
    check = True

    for i in range(len(s)-1):
        for j in range(i+1, len(s)):
            if s[i] != s[j]:
                for k in range(j+1, len(s)):
                    if s[i] == s[k]:
                        check = False

    if check:
        cnt += 1

sys.stdout.write(f"{cnt}\n")