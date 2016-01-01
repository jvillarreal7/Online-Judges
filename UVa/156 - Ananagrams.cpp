//First approach to this problem was using two maps for the original and modified words and using "count" which didn't work as expected.
//Ended up using a map with a pair inside instead based on another solution.
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	string s;
	map<string,pair<string,int> > m;
	vector<string> v;
	while(cin>>s)
	{
		if(s == "#")
			break;
		string aux;
		aux = s;
		transform(aux.begin(),aux.end(),aux.begin(),::tolower);
		sort(aux.begin(),aux.end());
		m[aux].first = s;
		m[aux].second++;
	}
	map<string,pair<string,int> >::const_iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
		if((*it).second.second == 1)
			v.push_back((*it).second.first);
	}
	/*for(it = m.begin(); it != m.end(); it++)
	{
		cout<<(*it).first<<' '<<(*it).second.first<<' '<<(*it).second.second<<endl;
	}*/
	sort(v.begin(),v.end())
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v.at(i)<<endl;
	}
	return 0;
}
