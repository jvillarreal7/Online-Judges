#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
	long long int n,m;
	while(scanf("%lld %lld", &n, &m) != EOF)
	{
		long long int r = abs(n-m);
		printf("%lld\n",r);
	}
	return 0;
}
