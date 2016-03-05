#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int t;
	cin>>t;
	while(t--)
	{
		int aux;
		cin>>aux;
		v.push_back(aux);
	}
	int control = v.size();
	while(true)
	{
		cout<<control<<endl;
		control = 0;
		int min = 432342342;
		for(int i = 0; i < v.size(); i++)
		{
			if(v[i] > 0)
			{
				if(min > v[i])
				{
					min = v[i];
				}
			}
		}
		for(int i = 0; i < v.size(); i++)
		{
			v[i] -= min;
			if(v[i] > 0)
			{
				control++;
			}
		}
		if(control == 0)
		{
			break;
		}
	}
	return 0;
}
