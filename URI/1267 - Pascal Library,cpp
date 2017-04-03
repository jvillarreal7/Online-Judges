#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, d;
	while(cin>>n>>d)
	{
		if(n == 0 && d == 0)
			break;
		int v[100][500] = {};
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < d; j++)
			{
				int aux;
				cin>>aux;
				v[i][j] = aux;
			}
		}

		bool flag = false;

		for(int i = 0; i < n; i++)
		{
			int sum = 0;
			for(int j = 0; j < d; j++)
			{
				cout<<v[i][j]<<endl;
				if(v[i][j] == 1)
					sum++;
			}
			cout<<"Sum: "<<sum<<endl;
			if(sum == d)
			{
				flag = true;
				break;
			}
		}

		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
