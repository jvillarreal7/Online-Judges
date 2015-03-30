#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, a[1000]={};
	cin>>n;
	if(n<=1000)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<1||a[i]>1000)
			break;
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
		return 0;
	}
}
