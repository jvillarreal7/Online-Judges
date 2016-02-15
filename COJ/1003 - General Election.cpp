#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		int votes[5] = {};
		cin>>n>>m;
		while(m--)
		{
			for(int i = 0; i < n; i++)
			{
				int aux;
				cin>>aux;
				votes[i] += aux;
			}
		}
		int max_count = 0;
		int max_index = 0;
		for(int i = 0; i < n; i++)
		{
			if(votes[i] >= max_count)
			{
				max_index = i;
				max_count = votes[i];
			}
		}
		cout<<max_index + 1<<endl;
	}
	return 0;
}
