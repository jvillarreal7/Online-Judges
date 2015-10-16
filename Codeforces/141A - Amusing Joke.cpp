#include <iostream>
#include <map>
using namespace std;

int main()
{
	string a,b,pile;
	getline(cin,a);
	getline(cin,b);
	getline(cin,pile);
	map<char,int> m1;
	a += b;
	for(int i = 0; i < a.length(); i++)
	{
		m1[a[i]]++;
	}
	map<char,int> m2;
	for(int j = 0; j < pile.length(); j++)
	{
		m2[pile[j]]++;
	}
	if(m1.size() == m2.size())
	{
		if(m1 == m2)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	else
	{		
		cout<<"NO"<<endl;
	}
	return 0;
}
