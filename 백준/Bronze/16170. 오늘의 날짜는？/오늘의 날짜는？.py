import sys
import time

tm = time.localtime(time.time())
if tm.tm_hour > 7:
    sys.stdout.write(f"{tm.tm_year}\n{tm.tm_mon}\n{tm.tm_mday}")
else:
    sys.stdout.write(f"{tm.tm_year}\n{tm.tm_mon}\n{tm.tm_mday-1}")
