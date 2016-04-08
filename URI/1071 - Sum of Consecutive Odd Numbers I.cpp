#include <iostream>
using namespace std;

int main() 
{
	int x, y, s = 0;
	cin>>x>>y;
	if(x == y)
	{
		cout<<0<<endl;
		return 0;
	}
	else
	if(x > y)
	{
		for(int i = x - 1; i > y; i--)
		{
			if(i % 2 != 0)
			{
				s += i;
			}
		}
	}
	else
	{
		for(int i = x + 1; i < y; i++)
		{
			if(i % 2 != 0)
			{
				s += i;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
