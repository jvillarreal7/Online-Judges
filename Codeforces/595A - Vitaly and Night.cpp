#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n,m,c = 0;
	vector<int> v;
	cin>>n>>m;
	while(n--)
	{
		int t = m*2;
		while(t--)
		{
			int j;
			cin>>j;
			v.push_back(j);
		}
	}
	for(int i = 0; i < v.size(); i++,i++)
	{
		if((v[i] == 1 || v[i+1] == 1))
		{
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
