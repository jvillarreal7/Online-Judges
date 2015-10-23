#include <iostream>
#include <map>
using namespace std;

int main()
{
	string name;
	map<char,int> m;
	getline(cin,name);
	for(int i = 0; i < name.length(); i++)
	{
		m[name[i]];
	}
	if(m.size() % 2 == 0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}
