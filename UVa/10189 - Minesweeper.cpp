#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x,y,c = 1;
	while(cin>>x>>y)
	{
		if(x == 0 && y == 0)
			break;
		char temp;
		char input[202][202] = {};
		//vector< vector<char> > input(202,vector<char>(202));
		int output[202][202] = {0};
		//vector< vector<int> > output(202,vector<int>(202));
		for(int i = 0; i < x; i++)
			for(int j = 0; j < y; j++)
			{
				cin>>temp;
				input[i][j] = temp;
			}
		for(int i = 0; i < x; i++)
			for(int j = 0; j < y; j++)
			{
				if(input[i][j] != '*')
				{
					if(input[i+1][j] == '*')
					{
						output[i][j]++;
					}
					if(input[i+1][j+1] == '*')
					{
						output[i][j]++;
					}
					if(input[i][j+1] == '*')
					{
						output[i][j]++;
					}
					if(input[i-1][j] == '*')
					{
						output[i][j]++;
					}
					if(input[i-1][j-1] == '*')
					{
						output[i][j]++;
					}
					if(input[i][j-1] == '*')
					{
						output[i][j]++;
					}
					if(input[i+1][j-1] == '*')
					{
						output[i][j]++;
					}
					if(input[i-1][j+1] == '*')
					{
						output[i][j]++;
					}
				}
			}
		if(c != 1)
		{
			cout<<endl;
		}
		cout<<"Field #"<<c<<":"<<endl;
		for(int i = 0; i < x; i++)
		{
			if(i != 0)
			{
				cout<<endl;
			}
			for(int j = 0; j < y; j++)
			{
				if(input[i][j] == '*')
				{
					cout<<'*';
				}
				else
					cout<<output[i][j];
			}
		}
		cout<<endl;
		c++;
	}
	return 0;
}
