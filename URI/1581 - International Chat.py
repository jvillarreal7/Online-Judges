n = int(input())
for x in range(n):
	k = int(input())
	language_set = set()
	for y in range(k):
		l = input()
		language_set.add(l)
	if len(language_set) > 1:
		print("ingles")
	else:
		print(language_set.pop())