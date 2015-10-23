#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	while(cin>>t)
	{
		if(t == 0)
			break;
		vector<int> v;
		for(int i = 0; i < t; i++)
		{
			int aux;
			cin>>aux;
			v.push_back(aux);
		}
		int temp,gap,i,j;
		int n = v.size();
		bool player = false;
		for(gap = n/2; gap > 0; gap /= 2)
		{
			for(i = gap; i < n; i++)
			{
				for(j = i - gap; j >= 0 && v[j] > v[j+gap]; j-=gap)
				{
					temp = v[j];
					v[j] = v[j+gap];
					v[j+gap] = temp;
					player = !player;
				}
			}
		}
		if(player)
		{
			cout<<"Marcelo"<<endl;
		}
		else
			cout<<"Carlos"<<endl;
	}
	return 0;
}
