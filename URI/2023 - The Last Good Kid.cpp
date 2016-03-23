#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
	string s;
	map<string,string> m;
	while(getline(cin,s))
	{
		string aux = s;
		transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
		m[aux] = s;
	}
	map<string,string>::reverse_iterator it;
	it = m.rbegin();
	cout<<(*it).second<<endl;
	return 0;
}
