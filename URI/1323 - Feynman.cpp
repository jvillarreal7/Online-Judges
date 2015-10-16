#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		long long int r = 0;
		if(n == 0)
			break;
		for(int i = n; i > 0; i--)
		{
			r += pow(i,2);
		}
		cout<<r<<endl;
	}
	return 0;
}
