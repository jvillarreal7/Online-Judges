#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		vector<int> k;
		vector<int> l;
		int c = 0;
		if(n == 0 && m == 0)
			break;
		for(int i = 0; i < n; i++)
		{
			int aux;
			cin>>aux;
			k.push_back(aux);
		}
		for(int i = 0; i < m; i++)
		{
			int aux;
			cin>>aux;
			l.push_back(aux);
		}
		k.erase(unique(k.begin(), k.end()), k.end());
		l.erase(unique(l.begin(), l.end()), l.end());
		int a = k.size();
		int b = l.size();
//		cout<<"Size K: "<<a<<endl;
//		cout<<"Size L: "<<b<<endl;
		if(a == b)
		{
			for(int i = 0; i < a; i++)
			{
				if(!binary_search(k.begin(), k.end(), l[i]))
					c++;
			}	
		}
		else
		if(a > b)
		{
			for(int i = 0; i < b; i++)
			{
				if(!binary_search(k.begin(), k.end(), l[i]))
					c++;
			}
		}
		else
		if(a < b)
		{
			for(int i = 0; i < a; i++)
			{
				if(!binary_search(l.begin(), l.end(), k[i]))
					c++;
			}
		}
		cout<<c<<endl;	
	}
	return 0;
}
