#include <iostream>
using namespace std;

int main()
{
	double x = 2;
	int t;
	cin>>t;
	while(t--)
	{
		int c = 0;
		cin>>x;
		while(x > 1)
		{
			x /= 2.0;
			c++;
		}
		cout<<c<<" dias"<<endl;
	}
	return 0;
}
