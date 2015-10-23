#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t;
	map<int,int> m;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		int aux;
		cin>>aux;
		m[aux]++;
	}
	map<int,int>::iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
		cout<<(*it).first<<" aparece "<<(*it).second<<" vez(es)"<<endl;
	}
	return 0;
}
