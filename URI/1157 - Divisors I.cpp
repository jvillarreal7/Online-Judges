#include <iostream>
using namespace std;
int main()
{
	int x,i=1;
	cin>>x;
	while(i<=x)
	{
		if(x%i==0)
			cout<<i<<endl;
		i++;
	}
	return 0;
}
