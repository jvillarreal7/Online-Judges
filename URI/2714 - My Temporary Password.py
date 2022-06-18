import re

n = int(input())
for i in range(n):
    s = input()
    ra = s[0:2]
    if ra != "RA" or len(s) != 20:
        print("INVALID DATA")
    else:
        pwd = re.split("RA0*", s)
        print(pwd[1])
