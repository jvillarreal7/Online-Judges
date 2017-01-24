#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int> v;
	while(n--)
	{
		int aux;
		cin>>aux;
		v.push_back(aux);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	reverse(v.begin() + 1, v.end());
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i];
		if(i != v.size() - 1)
			cout<<' ';
	}
	cout<<'\n';
	return 0;
}
