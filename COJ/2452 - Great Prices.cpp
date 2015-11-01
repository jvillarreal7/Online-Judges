#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout<<fixed<<setprecision(2);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<int,double> m;
		while(n--)
		{
			int id;
			double price;
			cin>>id>>price;
			if(m.find(id) == m.end())
			{
				m[id] = price;
			}
			else
			{
				if(price < m[id])
				{
					m[id] = price;
				}
			}
		}
		map<int,double>::iterator it;
		double sum = 0.0;
		for(it = m.begin(); it != m.end(); it++)
		{
			sum += (*it).second;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
