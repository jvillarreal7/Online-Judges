x = int(raw_input())
z = int(raw_input())
while x >= z:
	z = int(raw_input())
	if x < z:
		break
t = x + 1
c = 1
while x <= z:
	x += t
	t += 1
	c += 1
print c
