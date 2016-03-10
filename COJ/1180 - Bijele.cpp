#include <iostream>
using namespace std;

int main()
{
	int set[6] = {1,1,2,2,2,8};
	int t;
	cin>>t;
	while(t--)
	{
		for(int i = 0; i < 6; i++)
		{
			int aux;
			cin>>aux;
			cout<<set[i] - aux;
			if(i < 6 - 1)
			{
				cout<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
