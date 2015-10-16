#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main()
{
	int t;
	string s;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n1,n2;
		string aux1,aux2;
		getline(cin,s);
		if(isupper(s[1]) && s[0] != s[2])
		{
			aux1 = s[0];
			aux2 = s[2];
			n1 = atoi(aux1.c_str());
			n2 = atoi(aux2.c_str());
			cout<<n2-n1<<endl;
		}
		else
		if(islower(s[1]) && s[0] != s[2])
		{
			aux1 = s[0];
			aux2 = s[2];
			n1 = atoi(aux1.c_str());
			n2 = atoi(aux2.c_str());
			cout<<n2+n1<<endl;
		}
		else
		{
			aux1 = s[0];
			aux2 = s[2];
			n1 = atoi(aux1.c_str());
			n2 = atoi(aux2.c_str());
			if(n1==n2)
			{
				cout<<n1*n2<<endl;
			}
		}
	}
	return 0;
}
