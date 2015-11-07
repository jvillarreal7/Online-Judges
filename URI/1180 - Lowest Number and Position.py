n = int(raw_input())
xarr = []
xarr = raw_input().split()
xarr = map(int, xarr)
m = 1000000000000
index = 0

for i in xrange(0,n):
	if xarr[i] < m:
		m = xarr[i]
		index = i
print "Menor valor: %r"%m
print "Posicao: %r"%index
