#include <iostream>
#include <stack>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<char> l;
		stack<char> r;
		int c = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '<')
			{
				l.push('<');
			}
			if(s[i] == '>')
			{
				r.push('>');
				if(!l.empty())
				{
					l.pop();
					r.pop();
					c++;
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
