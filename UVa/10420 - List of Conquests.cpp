#include <iostream>
#include <map>
using namespace std;

int main() {
	string c,name;
	int n;
	map<string,int> m;
	cin>>n;
	while(n--)
	{
		cin>>c;
		getline(cin,name);
		m[c]++;
	}
	map<string,int>::iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
		cout<<it->first<<' '<<it->second<<endl;
	}
	return 0;
}
