#include <iostream>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,b;
	char id;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>b>>t;
		while(t--)
		{
			int temp;
			cin>>id>>temp;
			if(id == 'C')
			{
				b+=temp;
			}
			else
				b-=temp;
		}
		cout<<b<<"\n";
	}
	return 0;
}
