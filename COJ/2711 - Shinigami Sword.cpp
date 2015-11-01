#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	map<int,int> m;
	for(int i = 1; i <= t; i++)
	{
		int aux;
		cin>>aux;
		m[aux] = i;
	}
	map<int,int>::reverse_iterator it;
	for(it = m.rbegin(); it != m.rend(); it++)
	{
		cout<<(*it).second<<"\n";
	}
	return 0;
}
