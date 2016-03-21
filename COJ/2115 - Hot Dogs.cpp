#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout<<fixed<<setprecision(2);
	int a, b;
	while(cin>>a>>b)
	{
		cout<<(double)a/b<<'\n';	
	}
	return 0;
}
