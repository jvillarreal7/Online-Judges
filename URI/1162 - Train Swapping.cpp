#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		vector<int> v;
		int l;
		cin>>l;
		while(l--)
		{
			int aux;
			cin>>aux;
			v.push_back(aux);
		}
		int c = 0;
		//Bubble sort will do for this.
		for(int i = 0; i < v.size(); i++)
		{
			for(int j = 0; j < v.size() - 1; j++)
			{
				if(v[j] > v[j + 1])
				{
					int temp = v[j + 1];
					v[j + 1] = v[j];
					v[j] = temp;
					c++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
	}
	return 0;
}
