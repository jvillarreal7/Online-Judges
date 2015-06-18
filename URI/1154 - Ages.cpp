#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x=0,a=0,i=0;
	while(x>=0)
	{
		cin>>x;
		if(x>=0)
		{
			a+=x;
			i++;
		}
	}
	cout<<fixed<<setprecision(2);
	cout<<(double)a/i<<endl;
	return 0;
}
