#include <iostream>
using namespace std;
int main()
{
	int c,x,y,s=0;
	cin>>c;
	while(c!=0)
	{
		cin>>x>>y;
		while(y!=0)
		{
			if(x%2!=0)
			{
				s+=x;
				y--;
			}
			x++;
		}
		cout<<s<<endl;
		s=0;
		c--;
	}
	return 0;
}
