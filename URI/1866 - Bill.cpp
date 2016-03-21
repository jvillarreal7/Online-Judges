#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, s = 1;
		cin>>x;
		for(int i = 1; i < x; i++)
		{
			if(i % 2 != 0)
			{
				s -= 1;
			}
			else
			{
				s += 1;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
