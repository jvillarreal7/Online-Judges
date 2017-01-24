#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	while(cin>>t)
	{
		if(t == -1)
			break;
		int sum = 0;
		int c = 0;
		while(t--)
		{
			int aux;
			cin>>aux;
			sum += aux;
			if(sum % 100 == 0)
			{
				c++;
			}
		}
		cout<<c<<'\n';
	}
	return 0;
}
