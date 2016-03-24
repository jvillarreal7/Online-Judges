#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		if(n == 0)
			break;
		map<string,string> m;
		while(n--)
		{
			string name, rname;
			cin>>name>>rname;
			m[name] = rname;
		}
		int k;
		int dif = 0;
		cin>>k;
		while(k--)
		{
			string name, nick;
			cin>>name>>nick;
			int c = 0;
			for(int i = 0; i < nick.length(); i++)
			{
				string aux = m[name];
				if(aux[i] != nick[i])
				{
					c++;
				}
			}
			if(c > 1)
			{
				dif++;
			}
		}
		cout<<dif<<endl;
	}
	return 0;
}
