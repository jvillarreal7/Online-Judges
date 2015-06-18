#include <iostream>
using namespace std;
int main()
{
	int x,s=1,a=1;
	cin>>x;
	if(x>0&&x<13)
	{
		while(a<=x)
		{
			s*=a;
			a++;
		}
		cout<<s<<endl;
	}
	return 0;
}
