#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;
	v.push_back("Rolien");
	v.push_back("Naej");
	v.push_back("Elehcim");
	v.push_back("Odranoel");
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		while(k--)
		{
			int aux;
			cin>>aux;
			cout<<v[aux-1]<<endl;
		}
	}
	return 0;
}
