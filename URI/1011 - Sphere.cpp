#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double pi=3.14159,r,v;
	cin>>r;
	v=(4.0/3.0)*pi*pow(r,3);
	printf("VOLUME = %.3f\n",v);
	return 0;
}
