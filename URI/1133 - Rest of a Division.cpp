#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int x, y;
	cin>>x>>y;
	if(x < y)
	{
		for(int i = x + 1; i < y; i++)
		{
			if(i % 5 == 2 || i % 5 == 3)
			{
				cout<<i<<endl;
			}
		}
	}
	else
	if(x > y)
	{
		vector<int> v;
		for(int i = x - 1; i > y; i--)
		{
			if(i % 5 == 2 || i % 5 == 3)
			{
				v.push_back(i);
			}
		}
		reverse(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<endl;
		}
	}
	return 0;
}
