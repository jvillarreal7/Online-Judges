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
		int x;
		vector<int> v;
		vector<int> s;
		cin>>x;
		for(int i = 0; i < x; i++)
		{
			int aux;
			cin>>aux;
			v.push_back(aux);
			s.push_back(aux);
		}
		sort(s.begin(), s.end());
		reverse(s.begin(), s.end());
		int c = 0;
		for(int i = 0; i < x; i++)
		{
			if(v[i] == s[i])
			{
				c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
