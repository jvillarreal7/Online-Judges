#include <iostream>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		int aux;
		aux = 180 - a;
		if(360 % aux == 0)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
