#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		if(n == 0)
			break;
		unsigned long long int sum = 0;
		for(int i = 1; i <= n; i++)
		{
			sum += (i - 1)*(i - 1) + (i - 1) + i;
		}
		cout<<sum<<endl;
	}
	return 0;
}
