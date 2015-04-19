#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100],n;
    cin>>n;
    if(n>=1&&n<=100)
    {
    	for(int i=0;i<n;i++)
    	{
        	cin>>a[i];
    	}
    	sort(a,a+n);
    	for(int i=0;i<n;i++)
    	{
    	if (i==n-1)
        	cout<<a[i]<<"\n";
    	else
    	cout<<a[i]<<" ";
    	}
    }
    else
    return 0;
}
