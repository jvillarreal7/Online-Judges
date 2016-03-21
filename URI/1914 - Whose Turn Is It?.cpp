#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<string,string> m;
		string name1, aux1, name2, aux2;
		cin>>name1>>aux1>>name2>>aux2;
		m[name1] = aux1;
		m[name2] = aux2;
		int a, b;
		cin>>a>>b;
		if((a + b) % 2 == 0)
		{
			if(m[name1] == "PAR")
			{
				cout<<name1<<endl;
			}
			else
			{
				cout<<name2<<endl;
			}
		}
		else
		{
			if(m[name1] == "IMPAR")
			{
				cout<<name1<<endl;
			}
			else
			{
				cout<<name2<<endl;
			}
		}
	}
	return 0;
}
