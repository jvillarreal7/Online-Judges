#include <iostream>
using namespace std;
int main()
{
	int t;
	unsigned long long int a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b)
			cout<<">"<<endl;
		else
		if(a<b)
			cout<<"<"<<endl;
		else
			cout<<"="<<endl;
	}
	return 0;
}
