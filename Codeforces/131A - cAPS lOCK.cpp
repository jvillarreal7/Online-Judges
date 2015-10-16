#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	string s,c;
	bool all_upper = false;
	bool all_upper_but_the_first = false;
	getline(cin,s);
	if(islower(s[0]) && s.length() == 1)
	{
		c = toupper(s[0]);
	}
	else
	if(isupper(s[0]) && s.length() == 1)
	{
		c = tolower(s[0]);
	}
	else
	if(islower(s[0]))
	{
		for(int i = 1; i < s.length(); i++)
		{
			if(isupper(s[i]))
			{
				all_upper_but_the_first = true;
			}
			else
			{
				cout<<s<<endl;
				return 0;
			}
		}
		if(all_upper_but_the_first == true)
		{
			c += toupper(s[0]);
			for(int i = 1; i < s.length(); i++)
			{
				c += tolower(s[i]);
			}				
		}
	}
	else
	if(isupper(s[0]))
	{
		for(int i = 1; i < s.length(); i++)
		{
			if(isupper(s[i]))
			{
				all_upper = true;
			}
			else
			{
				cout<<s<<endl;
				return 0;
			}
		}
		if(all_upper == true)
		{
			//c += toupper(s[0]);
			for(int i = 0; i < s.length(); i++)
			{
				c += tolower(s[i]);
			}				
		}
	}
	cout<<c<<endl;
	return 0;
}
