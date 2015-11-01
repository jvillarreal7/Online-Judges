#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	vector<int> v;
	cin>>n;
	while(n--)
	{
		int aux;
		cin>>aux;
		v.push_back(aux);
	}
	int q1,q2;
	cin>>q1>>q2;
	sort(v.begin(),v.end());
	for(int i = 0; i < q1; i++)
	{
		int aux;
		cin>>aux;
		if(binary_search(v.begin(),v.end(),aux))
		{
			cout<<":)\n";
		}
		else
			cout<<":(\n";
	}
	for(int i = 0; i < q2; i++)
	{
		int aux;
		cin>>aux;
		cout<<v.at(aux-1)<<'\n';
	}
	return 0;
}
