#include <iostream>
using namespace std;
int main()
{
	int x,a=1,b=2,c=3;
	cin>>x;
	while(x!=0)
	{
		cout<<a<<" "<<b<<" "<<c<<" "<<"PUM"<<endl;
		a+=4;
		b+=4;
		c+=4;
		x--;
	}
	return 0;
}
