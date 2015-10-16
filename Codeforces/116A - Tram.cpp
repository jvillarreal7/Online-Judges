#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n,a,b,temp,max = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a>>b;
		if(i == 0)
		{
			max = b;
		}
		temp-=a;
		temp+=b;
		if(temp > max)
		{
			max = temp;
		}
		if(i == n-1)
		{
			if(a > max)
			{
				max = a;
			}
		}
	}
	cout<<max<<endl;
	return 0;
}
