#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,q,a;
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		vector<int> v;
		cin>>q;
		for(int j = 0; j < q; j++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		while(v.size() > 1)
		{
			v.erase(v.begin());
			v.erase(v.end()-1);
		}
		cout<<"Case "<<i<<": "<<v.at(0)<<endl;
	}
	return 0;
}
