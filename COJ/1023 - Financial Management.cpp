#include <iostream>
using namespace std;
int main()
{
	int n=12;
	float x,suma,prom;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		suma+=x;
	}
	prom=suma/n;
	cout<<"$"<<prom<<endl;
	return 0;
}
