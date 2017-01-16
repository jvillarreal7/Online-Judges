#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		unsigned long long int r;
		cin>>n;
		r = 2 * (n - 1) * (n) + 1;
		cout<<r<<'\n';
	}
	return 0;
}
