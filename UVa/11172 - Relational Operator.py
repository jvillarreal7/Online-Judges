n = int(input().strip())

while n > 0:
	ar = list(map(int, input().strip().split(' ')))
	if ar[0] == ar[1]:
		print('=')
	elif ar[0] > ar[1]:
		print('>')
	else:
		print('<')
	n -= 1
