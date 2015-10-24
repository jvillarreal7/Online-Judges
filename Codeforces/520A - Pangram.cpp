#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main()
{
	int t;
	string s;
	map<char,int> m1;
	map<char,int> m2;
	cin>>t;
	cin.ignore();
	getline(cin,s);
	for(int i = 0; i < s.size(); i++)
	{
		if(isupper(s[i]) && m2.find(tolower(s[i])) == m2.end())
		{
			m1[s[i]];
		}
		if(islower(s[i]) && m1.find(toupper(s[i])) == m1.end())
		{
			m2[s[i]];
		} 		
	}
	if(m1.size() + m2.size() == 26)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
