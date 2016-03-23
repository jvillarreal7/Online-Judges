#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	string s;
	cin>>t;
	getline(cin,s);
	while(t--)
	{
		getline(cin,s);
		for(int i = 0; i < s.length(); i++)
		{
			if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] += 3;
			}
		}
		reverse(s.begin(), s.end());
		for(int i = s.length() / 2; i <= s.length(); i++)
		{
			s[i] -= 1;
		}
		cout<<s<<endl;
	}
	return 0;
}
