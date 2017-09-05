while True:
	ducks = int(input().strip())
	if ducks == -1:
		break
	if ducks == 0:
		print(ducks)
	else:
		print(ducks - 1)
