#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	map<char,int> m;
	vector<int> v;
	string ABC;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	getline(cin,ABC);
	getline(cin,ABC);
	v.push_back(n1);
	v.push_back(n2);
	v.push_back(n3);
	sort(v.begin(), v.end());
	m['A'] = v[0];
	m['B'] = v[1];
	m['C'] = v[2];
	for(int i = 0; i < v.size(); i++)
	{
		char temp = ABC[i];
		cout<<m[temp];
		if(i != v.size()-1)
		{
			cout<<' ';
		}
	}
	return 0;
}
