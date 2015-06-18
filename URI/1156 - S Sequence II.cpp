#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double s=1,n=3,d=2;
	while(n!=41)
	{
		s+=(n/d);
		n+=2;
		d*=2;
	}
	cout<<fixed<<setprecision(2);
	cout<<s<<endl;
	return 0;
}
