#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <locale>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		bool s_flag = false;
		string m = "";
		vector<char> a;
		getline(cin,m);
		for(int i = 0; i < m.length(); i++)
		{
			if(m[i]==' ')
			{
				s_flag = true;
			}
			else
			if(m[i]!=' ' && s_flag == true)
			{
				a.push_back(m[i]);
				s_flag = false;
			}
			else
			if(i==0 && m[i]!=' ')
			{
				a.push_back(m[i]);
			}
		}
		for(int j = 0; j < a.size(); j++)
		{
			cout<<a.at(j);
		}
		cout<<"\n";
	}
	return 0;
}
