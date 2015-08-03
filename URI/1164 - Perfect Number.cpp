#include <iostream>
using namespace std;
int main()
{
	int x,c,a=1,s=0;
	cin>>c;
	while(c!=0)
	{
		cin>>x;
		while(a<x)
		{
			if(x%a==0)
			{
				s+=a;
				a++;
			}
			else
				a++;
		}
		if(s==x)
			cout<<x<<" "<<"eh perfeito"<<endl;
		else
			cout<<x<<" "<<"nao eh perfeito"<<endl;
		s=0;
		a=1;
		c--;
	}
	return 0;
}
