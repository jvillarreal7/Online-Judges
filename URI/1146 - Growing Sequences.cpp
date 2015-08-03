#include <iostream>
using namespace std;
int main()
{
	int x;
	while(1)
	{
		cin>>x;
		if(x==0)
			break;
		for(int i=1;i<=x;i++)
		{
			if(i!=x)
				cout<<i<<" ";
			else
				cout<<i<<endl;
		}
	}
	return 0;
}
