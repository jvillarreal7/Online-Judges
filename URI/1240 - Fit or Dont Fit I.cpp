//Can be done with URI 1241's code. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	string s1;
	cin>>t;
	getline(cin,s1);
	while(t--)
	{
		string s2;
		cin>>s1>>s2;
		if(s1.length() < s2.length())
		{
			cout<<"nao encaixa"<<endl;
		}
		else
		if(s1.length() == s2.length())
		{
			if(s1 == s2)
			{
				cout<<"encaixa"<<endl;
			}
			else
			{
				cout<<"nao encaixa"<<endl;
			}
		}
		else
		{
			string aux = s1.substr (s1.length() - s2.length(), s2.length());
			//cout<<s1<<' '<<s2<<endl;
			if(aux == s2)
			{
				cout<<"encaixa"<<endl;
			}
			else
			{
				cout<<"nao encaixa"<<endl;
			}
		}
	}
	return 0;
}
