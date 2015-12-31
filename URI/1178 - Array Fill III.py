temp = float(raw_input())
arr = {}
arr[0] = temp
for i in xrange(1,100):
	temp /= 2.0
	arr[i] = temp
for i in xrange(0,100):
	print "N[%d] = {0:.4f}".format(arr[i])%(i)
	