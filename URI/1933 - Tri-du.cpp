#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a,b;
	cin>>a>>b;
	if(a==b)
		cout<<a<<endl;
	else
		if(a<b)
			cout<<b<<endl;
		else
			cout<<a<<endl;
	return 0;
}
