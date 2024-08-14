import sys

s = sys.stdin.readline().rstrip()

cnt_zero = s.split('1')
cnt_one = s.split('0')

while '' in cnt_zero:
    cnt_zero.remove('')
while '' in cnt_one:
    cnt_one.remove('')

sys.stdout.write(f"{min(len(cnt_zero), len(cnt_one))}\n")