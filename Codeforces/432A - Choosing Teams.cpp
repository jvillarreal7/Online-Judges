#include <iostream>
using namespace std;
int main()
{
	int n,k,a[2000]={0},s,x=0,t=0;
	cin>>n>>k;
	if((n>=1)&&(n<=2000)&&(k>=1)&&(k<=5))
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			s=a[i]+k;
			if(s<=5)
			x++;
			if(x==3)
			{
				t++;
				x=0;
			}
		}
	cout<<t<<"\n";
	}
	return 0;
}
