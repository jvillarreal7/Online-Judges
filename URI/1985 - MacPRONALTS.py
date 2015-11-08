dict = {'1001': 1.50, '1002': 2.50, '1003': 3.50, '1004': 4.50, '1005': 5.50};
x = int(raw_input())
s = 0.0
for i in xrange(0,x):
	pr,q = (raw_input().split())
	q = float(q)
	s += dict[pr]*q;
print "{0:.2f}".format(s)
