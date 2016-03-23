//Got a little confused by the output format, could've done better but eh. :P

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int t;
	int k = 0;
	cin>>t;
	while(t--)
	{
		if(k != 0)
		{
			cout<<endl;
		}
		int aux;
		vector<string> n;
		vector<string> att;
		cin>>aux;
		for(int i = 0; i < aux; i++)
		{
			string name;
			cin>>name;
			n.push_back(name);
		}
		for(int i = 0; i < aux; i++)
		{
			string atmp, a;
			cin>>atmp;
			for(int i = 0; i < atmp.length(); i++)
			{
				if(atmp[i] != 'M')
				{
					a += atmp[i];
				}
			}
			att.push_back(a);
		}
		vector<string> r;
		for(int i = 0; i < n.size(); i++)
		{
			string pr = att[i];
			size_t pr_count = count(pr.begin(), pr.end(), 'P');
			if((double)pr_count / (double)pr.length() < .75)
			{
				r.push_back(n[i]);
			}
		}
		for(int i = 0; i < r.size(); i++)
		{
			cout<<r[i];
			if(i != r.size() - 1)
			{
				cout<<' ';
			}
		}
		k++;
	}
	cout<<endl;
	return 0;
}
