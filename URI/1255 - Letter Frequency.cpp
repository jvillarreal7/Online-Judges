#include <iostream>
#include <map>
#include <cctype>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		map<char,int> m;
		string s;
		getline(cin,s);
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] >= 'A' && s[i] <= 'z')
			{
				if(isupper(s[i]))
				{
					char temp = tolower(s[i]);
					m[temp]++;
				}
				else
					m[s[i]]++;
			}
		}
		map<char,int>::iterator it;
		int max = 0;
		for(it = m.begin(); it != m.end(); it++)
		{
			if((*it).second > max)
			{
				max = (*it).second;
			}
		}
		for(it = m.begin(); it != m.end(); it++)
		{
			if((*it).second == max)
			{
				cout<<(*it).first;
			}
		}
		cout<<endl;
	}
	return 0;
}