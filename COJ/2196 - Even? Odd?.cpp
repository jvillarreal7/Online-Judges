#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	string n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int aux = n[n.length() - 1] - '0';
		if(aux % 2 == 0)
		{
			cout<<"even"<<'\n';
		}
		else
			cout<<"odd"<<'\n';
	}
	return 0;
}
