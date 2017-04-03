#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio;
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum = 0;
		cin>>n;
		if(n % 2 == 0)
		{
			for(int i = 1; i < n / 2; i++)
			{
				if(n % i == 0)
				{
					sum += i;
				}
				if(n % n - i == 0)
				{
					sum += n - i;
				}
			}
			sum -= n / 2;
		}
		else
		{
			for(int i = 1; i < n / 2; i++)
			{
				if(n % i == 0)
				{
					sum += i;
				}
				if(n % n - i == 0)
				{
					sum += n - i;
				}
			}
		}
		cout<<sum<<endl;
		if(sum < n)
		{
			cout<<"deficient"<<'\n';
		}
		else
		if(sum == n)
		{
			cout<<"perfect"<<'\n';
		}
		else
		{
			cout<<"abundant"<<'\n';
		}
		//cout<<sum<<endl;
	}
	return 0;
}
