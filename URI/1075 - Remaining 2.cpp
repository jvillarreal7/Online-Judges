#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<1000)
	{
		for(int i=0;i<10000;i++)
		{
			if(i>1)
			{
				if(i%n==2)
				cout<<i<<endl;
			}
		}
	}
	return 0;
}
