n,k = raw_input().split()
n = int(n)
k = int(k)
xarr = []
c = 0

xarr = raw_input().split()
xarr = map(int, xarr)
    
for i in range(0,n):
        if xarr[i] >= xarr[k-1]:
        	if xarr[i] != 0:
        		c += 1
print c
