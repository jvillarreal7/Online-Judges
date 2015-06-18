#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double s=1,d=2;
	while(d!=101)
	{
		s+=(1/d);
		d++;
	}
	cout<<fixed<<setprecision(2);
	cout<<s<<endl;
	return 0;
}
