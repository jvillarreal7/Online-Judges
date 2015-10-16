#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,q,c = 1;
	while(cin>>n>>q)
	{
		vector<int> v;
		if(n == 0 && q == 0)
			break;
		for(int i = 0; i < n; i++)
		{
			int aux;
			cin>>aux;
			v.push_back(aux);
		}
		sort(v.begin(),v.end());
		cout<<"CASE# "<<c<<":"<<endl;
		for(int i = 0; i < q; i++)
		{
			int aux;
			cin>>aux;
			if(binary_search(v.begin(),v.end(),aux))
			{
				vector<int>::iterator low;
				low = lower_bound (v.begin(), v.end(), aux);
				cout<<aux<<" found at "<<(low - v.begin() + 1)<<endl;
			}
			else
			{
				cout<<aux<<" not found"<<endl;
			}
		}
		c++;
	}
	return 0;
}
