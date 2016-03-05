#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		int c = 0;
		cin>>n;
		int x = atoi(n.c_str());
		for(int i = 0; i < n.length(); i++)
		{
			int temp = n[i] - '0';
			if(temp != 0)
			{
				if(x % temp == 0)
					c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
