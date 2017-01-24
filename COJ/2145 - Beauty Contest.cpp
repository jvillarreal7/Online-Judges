#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++)
	{
		int sum = 0;
		vector<int> v;
		for(int j = 0; j < 10; j++)
		{
			int aux;
			cin>>aux;
			v.push_back(aux);
		}
		sort(v.begin(), v.end());
		for(int k = 1; k < 9; k++)
		{
			sum += v[k];
		}
		cout<<i<<" "<<sum<<'\n';
	}
	return 0;
}
