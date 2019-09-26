import re

n = int(input())
for x in range(n):
	q = input()
	s = sum(list(map(int,(re.findall('\d+', q)))))
	print(s)