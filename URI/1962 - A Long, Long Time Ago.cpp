#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x;
		y = x;
		x -= 2015;
		//cout<<">> "<<x<<endl;
		if(x >= 0)
		{
			cout<<abs(x + 1);	
		}
		else
		{
			cout<<abs(x);
		}
		if(y >= 2015)
		{
			cout<<" A.C."<<endl;
		}
		else
		{
			cout<<" D.C."<<endl;
		}
	}
	return 0;
}
