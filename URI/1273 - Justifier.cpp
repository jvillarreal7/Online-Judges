#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	int k = 0;
	while(cin>>n)
	{
		if(n == 0)
			break;
		if(k != 0)
			cout<<endl;
		vector<string> v;
		int max_size = 0;
		for(int i = 0; i < n; i++)
		{
			string aux;
			cin>>aux;
			v.push_back(aux);
			if(aux.length() > max_size)
			{
				max_size = aux.length();
			}
		}
		for(int i = 0; i < n; i++)
		{
			int dif = max_size - v[i].length();
			for(int j = 0; j < dif; j++)
			{
				cout<<' ';
			}
			cout<<v[i]<<endl;
		}
		k++;
	}
	return 0;
}
