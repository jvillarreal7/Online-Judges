#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t, n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string temp;
		vector<string> v;
		bool flag = true;
		getline(cin,temp);
		for(int i = 0; i < n; i++)
		{
			getline(cin,temp);
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++)
		{
			if(i < v.size() - 1)
			{
				if(v[i + 1].find(v[i]) != string::npos)
				{
					cout<<"NO"<<'\n';
					flag = false;
					break;
				}
			}
		}
		if(flag == true)
		{
			cout<<"YES"<<'\n';
		}
	}
	return 0;
}
