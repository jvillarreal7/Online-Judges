#include <iostream>
using namespace std;

int main() 
{
	int x;
	while(cin>>x)
	{
		int s = 0;
		if(x == 0)
			break;
		else
		if(x % 2 == 0)
		{
			s = x;
			for(int i = 0; i < 4; i++)
			{
				x += 2;
				s += x;
			}
		}
		else
		if(x % 2 != 0)
		{
			x += 1;
			s = x;
			for(int i = 0; i < 4; i++)
			{
				x += 2;
				s += x;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
