#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[45];
		cin>>n;
		a[0] = 0;
        a[1] = 1;
        for(int i=2;i<n;i++)
        {
            a[i] = a[i-1]+a[i-2];
        }
		for(int j=0;j<n;j++)
        {
            if (j == n-1)
            cout<<a[j]<<"\n";
            else
            cout<<a[j]<<" ";
        }
	return 0;
}
