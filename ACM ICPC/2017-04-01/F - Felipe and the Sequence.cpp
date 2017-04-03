#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio;
	int t;
	cout<<fixed<<setprecision(0);
	cin>>t;
	while(t--)
	{
		unsigned long long int s;
		cin>>s;
		cout<<s*s+2*s<<'\n';
	}
	return 0;
}
