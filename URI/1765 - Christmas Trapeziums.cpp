#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int t,q;
	double a,b,r;
	cout<<fixed<<setprecision(2);
	while(1)
	{
		cin>>t;
		if(t==0)
			break;
		for(int i=1;i<=t;i++)
		{
			cin>>q>>a>>b;
			r=(((a+b)/2.0)*5.0)*q;
			if(i!=t)
				cout<<"Size #"<<i<<":\n"<<"Ice Cream Used: "<<r<<" cm2"<<endl;
			else
				cout<<"Size #"<<i<<":\n"<<"Ice Cream Used: "<<r<<" cm2\n\n";
		}
	}
	return 0;
}
