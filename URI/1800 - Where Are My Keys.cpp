#include <iostream>
#include <map>
using namespace std;

int main()
{
	int q,e;
	map<int,int> m;
	cin>>q>>e;
	while(e--)
	{
		int aux;
		cin>>aux;
		m[aux];
	}
	while(q--)
	{
		int aux;
		cin>>aux;
		if(m.find(aux) != m.end())
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
			m[aux];
		}
	}
	return 0;
}
