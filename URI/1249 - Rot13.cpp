#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		vector<char> v;
		for(int i = 0; i < s.length(); i++)
		{
			if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			{
				if(isupper(s[i]))
				{
					if((s[i] + 13) > 90)
					{
						int dif = (s[i] + 13) - 90;
						v.push_back('A' + dif - 1);
					}
					else
					{
						v.push_back(s[i] + 13);
					}
				}
				else
				{
					if((s[i] + 13) > 122)
					{
						int dif = (s[i] + 13) - 122;
						v.push_back('a' + dif - 1);
					}
					else
					{
						v.push_back(s[i] + 13);
					}
				}
			}
			else
			{
				v.push_back(s[i]);
			}
		}
		for(int i = 0; i < v.size(); i++)
		{
			cout<<v.at(i);
		}
		cout<<endl;
	}
	return 0;
}
