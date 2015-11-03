#include <iostream>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		string r = "$";
		string c;
		getline(cin,c);
		int counter = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s.length() == 1 || s.length() == 2)
			{
				r += s;
				break;	
			}
			if(s.length() % 3 == 1)
			{
				if(i == 0)
				{
					r += s[i];
					r += ",";
				}
				else
				{
					r += s[i];
					counter++;
					if(counter == 3 && i != s.length()-1)
					{
						r += ",";
						counter = 0;
					}
				}
			}
			else
			if(s.length() % 3 == 2)
			{
				if(i < 1)
				{
					r += s[i];
				}
				else
				if(i == 1)
				{
					r += s[i];
					r += ",";
				}
				else
				{
					r += s[i];
					counter++;
					if(counter == 3 && i != s.length()-1)
					{
						r += ",";
						counter = 0;
					}
				}
			}
			else
			if(s.length() % 3 == 0)
			{
				if(i % 3 == 0 && i != 0)
				{
					r += ",";
					r += s[i];
				}
				else
				{
					r += s[i];
				}
			}
		}
		if(c.length() > 1)
		{
			r += ".";
			r += c;
		}
		else
		{
			r += ".0";
			r += c;
		}
		cout<<r<<endl;
	}
	return 0;
}
