#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b, c;
	cin>>a>>b>>c;
	if((pow(b,2)-4*a*c) >= 0)
		cout<<"YES"<<'\n';
	else
		cout<<"NO"<<'\n';
	return 0;
}
