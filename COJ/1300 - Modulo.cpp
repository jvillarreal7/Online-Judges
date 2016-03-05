#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int,int> m;
	for(int i = 0; i < 10; i++)
	{
		int x;
		cin>>x;
		m[x % 42];
	}
	cout<<m.size()<<endl;
	return 0;
}
