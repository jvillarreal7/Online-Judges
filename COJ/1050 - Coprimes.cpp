#include <iostream>
using namespace std;

int gcd(int p, int q)
{
	if(q == 0)
		return p;
	else
	{
		int r = p % q;
		return gcd(q,r);
	}		
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, c = 0;
	cin>>n;
	for(int i = 1; i < n; i++)
	{
		int aux = gcd(i,n);
		if(aux == 1)
		{
			c++;
		}
	}
	cout<<c<<'\n';
	return 0;
}
