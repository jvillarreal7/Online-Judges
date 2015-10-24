#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	vector<int> v;
	cin>>t;
	while(t--)
	{
		int aux;
		cin>>aux;
		v.push_back(aux);
	}
	int s = v.size();
	int c = 0;
	for(int i = 0; i < s; i++)
	{
		if(v[i] != v[i+1])
		{
			c++;
		}
	}	
	cout<<c<<endl;
	return 0;
}
