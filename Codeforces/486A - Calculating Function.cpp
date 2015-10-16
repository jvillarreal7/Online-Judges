#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	unsigned long long int n;
	long long int r;
	cin>>n;
	if(n % 2 == 0)
	{
		r = n/2;
	}
	else
	{
		if(n == 1)
		{
			cout<<-1<<endl;
			return 0;
		}
		else
			r = (n/2)*(-1)-1;
	}
	cout<<r<<endl;
	return 0;
}
