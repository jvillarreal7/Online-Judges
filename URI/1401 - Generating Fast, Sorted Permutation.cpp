#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<char> v;
		for(int i = 0; i < s.length(); i++)
		{
			v.push_back(s[i]);
		}
		sort(v.begin(), v.end());
		do
		{
			for(int i = 0; i < v.size(); i++)
			{
				cout<<v[i];
			}
			cout<<endl;
		}
		while(next_permutation(v.begin(), v.end()));
		cout<<endl;
	}
	return 0;
}
