#include <iostream>
using namespace std;
int main()
{
	int n,x,a=0,b=0;
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		while(1)
		{
			if(n==0)
				break;
			cin>>x;
			if(x==0)
				a++;
			else
			if(x==1)
				b++;
			n--;
		}
		cout<<"Mary won "<<a<<" times and John won "<<b<<" times"<<endl;
		a=0;
		b=0;
	}
	return 0;
}
