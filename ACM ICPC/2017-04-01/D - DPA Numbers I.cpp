#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum = 1;
		cin>>n;
		for(int i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				sum += i;
			}
		}
		if(sum < n)
		{
			cout<<"deficient"<<endl;
		}
		else
		if(sum == n)
		{
			cout<<"perfect"<<endl;
		}
		else
		{
			cout<<"abundant"<<endl;
		}
		//cout<<sum<<endl;
	}
	return 0;
}
