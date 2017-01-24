#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	cout<<"Lumberjacks:"<<'\n';
	while(t--)
	{
		vector<int> lj;
		bool sortedAsc = true;
		bool sortedDesc = true;
		for(int i = 0; i <= 9; i++)
		{
			int aux;
			cin>>aux;
			lj.push_back(aux);
		}
		//Ascendent check.
		for(int i = 0; i < lj.size() - 1; i++)
		{
			if(lj[i] > lj[i+1])
			{
				sortedAsc = false;
				break;
			}
		}
		//Descendent check.
		for(int i = 0; i < lj.size() - 1; i++)
		{
			if(lj[i] < lj[i+1])
			{
				sortedDesc = false;
				break;
			}
		}
		if(sortedAsc == false && sortedDesc == false)
		{
			cout<<"Unordered"<<'\n';
		}
		else
		{
			cout<<"Ordered"<<'\n';
		}
	}
	return 0;
}
