#include <iostream>
using namespace std;

int main() 
{
	string s;
	while(getline(cin,s))
	{
		int italic_c = 0;
		int bold_c = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] != '_' && s[i] != '*')
			{
				cout<<s[i];
			}
			else
			if(s[i] == '_')
			{
				italic_c++;
				if(italic_c == 1)
				{
					cout<<"<i>";
				}
				else
				{
					cout<<"</i>";
					italic_c = 0;
				}
			}
			else
			if(s[i] == '*')
			{
				bold_c++;
				if(bold_c == 1)
				{
					cout<<"<b>";
				}
				else
				{
					cout<<"</b>";
					bold_c = 0;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
