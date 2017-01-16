#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	string f_bin;
	string s_bin;
	while(cin>>f_bin>>s_bin)
	{
		if(f_bin[0] == 'X')
			break;
		int c = 0;
		for(int i = 0; i < f_bin.length(); i++)
		{
			if(f_bin[i] != s_bin[i])
			{
				c++;
			}
		}
		cout<<"Hamming distance is "<<c<<"."<<'\n';
	}
	return 0;
}
