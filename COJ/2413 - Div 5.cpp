#include <iostream>
using namespace std;

int main()
{
	int t;
	string n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n[n.length() - 1] == '0' || n[n.length() - 1] == '5')
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<'\n';
	}
	return 0;
}
