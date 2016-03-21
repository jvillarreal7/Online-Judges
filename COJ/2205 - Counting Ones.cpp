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
		int a, b, c = 0;
		cin>>a>>b;
		for(int i = a; i <= b; i++)
		{
			int s = i;
			while(s != 0)
			{
				int aux = s % 2;
				s /= 2;
				if(aux != 0)
				{
					c++;	
				}
			}
		}
		cout<<c<<'\n';
	}
	return 0;
}
