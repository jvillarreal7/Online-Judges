#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int k,l,m,n,d;
	vector<int> v;
	cin>>k>>l>>m>>n>>d;
	if(k == 1 || l == 1 || m == 1 || n == 1)
	{
		cout<<d<<endl;
		return 0;
	}
	for(int i = k; i <= d; i+=k)
	{
		if((find(v.begin(),v.end(),i)) != v.end())
		{
			continue;
		}
		else
			v.push_back(i);
	}
	for(int i = l; i <= d; i+=l)
	{
		if((find(v.begin(),v.end(),i)) != v.end())
		{
			continue;
		}
		else
			v.push_back(i);
	}
	for(int i = m; i <= d; i+=m)
	{
		if((find(v.begin(),v.end(),i)) != v.end())
		{
			continue;
		}
		else
			v.push_back(i);
	}
	for(int i = n; i <= d; i+=n)
	{
		if((find(v.begin(),v.end(),i)) != v.end())
		{
			continue;
		}
		else
			v.push_back(i);
	}
	cout<<v.size()<<endl;
	return 0;
}
