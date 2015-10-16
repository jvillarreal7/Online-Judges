#include <iostream>
using namespace std;
int main()
{
	int t;
	string input;
	cin>>t;
	cin.ignore();
	int c = 0;
	while(t--)
	{
		getline(cin,input);
		if(input.length() == 3)
		{
			int plus = 0;
			int minus = 0;
			int x = 0;
			for(int i = 0; i < input.length(); i++)
			{
				if(input[i] == 'X')
					x++;
				else
				if(input[i] == '+')
					plus++;
				else
				if(input[i] == '-')
					minus++;
			}
			if(x == 1 && plus == 2)
			{
				c++;
			}
			else
			if(x == 1 && minus == 2)
			{
				c--;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
