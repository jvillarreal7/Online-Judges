#include <iostream>
using namespace std;
 
int main()
{
	string s;
	while(getline(cin,s))
	{
		string aux = "";
		bool flag = true;
		for(int i = 0; i < s.length(); i++)
		{
			if(flag && s[i] != ' ')
			{
				aux += toupper(s[i]);
				flag = false;
			}
			else
			if(!flag && s[i] != ' ')
			{
				aux += tolower(s[i]);
				flag = true;
			}
			else
				aux += s[i];
		}
		cout<<aux<<endl;
	}
	return 0;
}