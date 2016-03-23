#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int t;
	string s;
	cin>>t;
	getline(cin,s);
	while(t--)
	{
		map<char,int> m;
		getline(cin,s);
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				m[s[i]];
			}
		}
		if(m.size() == 26)
		{
			cout<<"frase completa"<<endl;
		}
		else
		if(m.size() >= 13 && m.size() < 26)
		{
			cout<<"frase quase completa"<<endl;
		}
		else
		{
			cout<<"frase mal elaborada"<<endl;
		}
	}
	return 0;
}
