#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,m;
	string q,comp;
	map<string,int> list;
	cin>>n>>m;
	getline(cin,q);
	for(int i = 0; i < n; i++)
	{
		getline(cin,q);
		list[q];
	}
	for(int j = 0; j < m; j++)
	{
		getline(cin,comp);
		if(comp.find(' ')==string::npos)
		{
			cout<<"not found\n";
		}
		else
			if (list.find(comp) == list.end()) 
			{ 
				cout<<"wrong\n";
			}
			else 
			{ 
				cout<<"ok\n";
			}		
	}
	return 0;
}
