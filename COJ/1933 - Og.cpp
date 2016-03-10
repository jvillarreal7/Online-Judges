#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int l, r;
	while(cin>>l>>r)
	{
		if(l == 0 && r == 0)
			break;
		cout<<l + r<<'\n';
	}
	return 0;
}
