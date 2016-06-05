#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
 
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.second < j.second;
}
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<pair<int,int> > v;
	int t;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		int f, s;
		cin>>f>>s;
		v.push_back(std::make_pair(f,s));
	}
	stable_sort(v.rbegin(), v.rend(), compare);
	for(int i = 0; i < t; i++)
	{
		cout<<v[i].first<<' '<<v[i].second<<'\n';
	}
	return 0;
}
