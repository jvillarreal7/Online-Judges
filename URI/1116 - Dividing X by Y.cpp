#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x,y,n;
	double z;
	cin>>n;
	cout<<fixed<<setprecision(1);
	while(n!=0)
	{
		cin>>x>>y;
		z=(double)x/y;
		if(y==0)
		{
			cout<<"divisao impossivel"<<endl;
			n--;
		}
		else
		{
			cout<<z<<endl;
			n--;
		}
	}
	return 0;	
}
