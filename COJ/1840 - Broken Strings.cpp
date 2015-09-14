#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <locale>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int t;
	string password;
	map<char,int> m;
	cin>>t;
	while(t--)
	{
		int s[6] = {};
		cin>>password;
		m['B']=0;
		m['R']=0;
		m['O']=0;
		m['K']=0;
		m['E']=0;
		m['N']=0;
		for (int i = 0; i < password.size(); i++)
    	{
    		if (password[i] == 'B') 
				m['B']+=1;
			else
			if (password[i] == 'R') 
				m['R']+=1;
			else
			if (password[i] == 'O') 
				m['O']+=1;
			else
			if (password[i] == 'K') 
				m['K']+=1;
			else
			if (password[i] == 'E') 
				m['E']+=1;
			else
			if (password[i] == 'N') 
				m['N']+=1;
		}
		map<char,int>::iterator a;
		int c = 0;
		for(a = m.begin(); a != m.end(); a++)
		{
			s[c]=(*a).second;
			c++;
			//cout<<a->first<<a->second<<endl;
		}
		if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4]&&s[4]==s[5])
		{
			cout<<"No Secure"<<endl;
		}
		else
			cout<<"Secure"<<endl;
	}
	return 0;
}
