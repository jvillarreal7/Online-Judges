#include <iostream>
using namespace std;
int main()
{
	int x,y;
	long long int s=0;
	cin>>x>>y;
	if(x<y)
	{
		while(x<=y)
		{
			if(x%13!=0)
				s+=x;
			x++;
		}
	}
	else
	if(y<x)
	{
		while(y<=x)
		{
			if(y%13!=0)
				s+=y;
			y++;
		}
	}
	else
		if(x%13!=0)
			s+=x;
	cout<<s<<endl;
	return 0;
}
