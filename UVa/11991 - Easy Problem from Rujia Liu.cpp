#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() 
{
	int n, m;
	while(cin>>n>>m)
	{
		//UVa's test cases do not seems to take into account that you have to reset your adj. list every time new "n" and "m" values are introduced.
		//But URI tests this particular case so you may get WA 10% if you copy/paste your UVa AC as is.
		map<int, vector<int> > adj_list;
		for(int i = 0; i < n; i++)
		{
			int aux;
			cin>>aux;
			adj_list[aux].push_back(i+1);
		}
		for(int i = 0; i < m; i++)
		{
			int k, v;
			cin>>k>>v;
			if(k > adj_list[v].size())
			{
				cout<<0<<endl;
			}
			else
			{
				cout<<adj_list[v][k-1]<<endl;
			}
		}
	}
	return 0;
}
