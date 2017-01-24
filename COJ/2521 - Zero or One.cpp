#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b, c;
	while(cin>>a>>b>>c)
	{
		if(a != b && a != c)
			cout<<'A'<<'\n';
		else
		if(b != a && b != c)
			cout<<'B'<<'\n';
		else
		if(c != a && c != b)
			cout<<'C'<<'\n';
		else
		if(a == b && b == c)
			cout<<'*'<<'\n';
	}
	return 0;
}
