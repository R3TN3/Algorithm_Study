import sys
import math

s = sys.stdin.readline().rstrip()
t = sys.stdin.readline().rstrip()

s_len = len(s)
t_len = len(t)

lcm_len = math.lcm(s_len, t_len)

s_len = lcm_len // s_len
t_len = lcm_len // t_len

if s * s_len == t * t_len:
  sys.stdout.write("1")
else:
  sys.stdout.write("0")