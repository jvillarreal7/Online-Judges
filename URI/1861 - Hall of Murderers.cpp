#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	map<string,int> m;
	vector<string> v;
	string a, b;
	while(cin>>a>>b)
	{
		m[a]++;
		v.push_back(b);
	}
	for(int i = 0; i < v.size(); i++)
	{
		if(m.find(v[i]) != m.end())
		{
			m.erase(v[i]);
		}
	}
	map<string,int>::iterator it;
	cout<<"HALL OF MURDERERS"<<endl;
	for(it = m.begin(); it != m.end(); it++)
	{
		cout<<(*it).first<<' '<<(*it).second<<endl;
	}
	return 0;
}
