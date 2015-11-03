//Important note: Don't ever use cin.ignore() in COJ to catch line breaks caused by cin. Guaranteed runtime error / WA.
//Use getchar() or getline(cin,x) instead.

#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	map<string,int> surname;
	cin>>n;
	string s;
	getline(cin,s);
	while(n--)
	{
		getline(cin,s);
		size_t t = s.find(' ');
		string aux2;
		aux2 = s.substr(t+1);
		surname[aux2]++;
	}
	int t;
	cin>>t;
	getline(cin,s);
	while(t--)
	{
		int counter = 0;
		getline(cin,s);
		size_t t = s.find(' ');
		string aux2;
		aux2 = s.substr(t+1);
		if(surname.find(aux2) != surname.end())
		{
			counter = surname[aux2];
		}
		cout<<counter<<'\n';
	}
	return 0;
}
