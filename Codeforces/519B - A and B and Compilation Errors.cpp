#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int n,a,b,c,aux1=0,aux2=0,aux3=0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a;
		aux1+=a;
	}
	for(int i = 0; i < n-1; i++)
	{
		cin>>b;
		aux2+=b;
	}
	cout<<aux1-aux2<<endl;
	for(int i = 0; i < n-2; i++)
	{
		cin>>c;
		aux3+=c;
	}
	cout<<aux2-aux3<<endl;
	return 0;
}
