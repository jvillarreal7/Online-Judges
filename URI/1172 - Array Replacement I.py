xarr = list()
for i in xrange(0,10):
    n = raw_input()
    xarr.append(int(n))
for i in xrange(0,10):
    if xarr[i] < 1:
        xarr[i] = 1
        print "X[%r] = %r"%(i, xarr[i])
    else:
        print "X[%r] = %r"%(i, xarr[i])
