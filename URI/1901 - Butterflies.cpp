#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	map<int,int> m;
	int a[200][200]={};
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < n*2; i++)
	{
		int x,y;
		cin>>x>>y;
		m[a[x-1][y-1]];
	}
	cout<<m.size()<<endl;
	return 0;
}
