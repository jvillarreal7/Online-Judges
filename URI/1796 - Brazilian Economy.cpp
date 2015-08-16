#include <iostream>
using namespace std;
int main()
{
	long n,v,a=0,b=0;
	cin>>n;
	while(n--)
	{
		cin>>v;
		if(v==0)
			a++;
		if(v==1)
			b++;
	}
	if(a>b)
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
	return 0;
}
