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
	while(t--)
	{
		int b, a;
		cin>>b>>a;
		vector<int> v;
		for(int i = 0; i < a; i++)
		{
			int r, d;
			cin>>r>>d;
			v.push_back(r);
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		int sum = 0;
		for(int i = 0; i < b; i++)
		{
			sum += v[i];
		}
		cout<<sum<<'\n';
	}
	return 0;
}
