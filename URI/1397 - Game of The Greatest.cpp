#include <iostream>
using namespace std;
int main()
{
	int r,x,y,a=0,b=0;
	while(1)
	{
		cin>>r;
		if(r==0)
			break;
		while(r!=0)
		{
			cin>>x>>y;
			if(x>y)
				a++;
			else
			if(x<y)
				b++;
			r--;
		}
		cout<<a<<" "<<b<<endl;
		a=0;
		b=0;
	}
	return 0;
}
