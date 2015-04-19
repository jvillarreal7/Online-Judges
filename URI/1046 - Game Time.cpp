#include <iostream>
using namespace std;
int main()
{
	int a,b,x;
	cin>>a>>b;
	if(a+b<=46)
	{
		if(a>b)
		{
			x=(24+b)-a;
			cout<<"O JOGO DUROU "<<x<<" HORA(S)"<<endl;
		}
		else
		if(a<b)
		{
			x=b-a;
			cout<<"O JOGO DUROU "<<x<<" HORA(S)"<<endl;
		}
		else
		{
			x=24;
			cout<<"O JOGO DUROU "<<x<<" HORA(S)"<<endl;
		}
	}
	return 0;
}
