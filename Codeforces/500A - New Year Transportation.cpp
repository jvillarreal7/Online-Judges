#include <iostream>
using namespace std;
int main()
{
	int n,t;
	int a[30001]={};
	cin>>n>>t;
	for(int i = 1; i < n; i++)
	{
		int aux;
		cin>>aux;
		a[i] = aux;
	}
	
	int i = 1;
	while(i < t)
	{
		i+=a[i];
		//cout<<i<<endl;
	}
	if(i == t)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
