#include <iostream>
using namespace std;
int main()
{
	int n,a[10000];
	string b[10000];
	cin>>n;
	if(n<10000)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>0&&a[i]%2==0)
				b[i]="EVEN POSITIVE";
			else
			if(a[i]>0&&a[i]%2!=0)
				b[i]="ODD POSITIVE";
			else
			if(a[i]<0&&a[i]%2==0)
				b[i]="EVEN NEGATIVE";
			else
			if(a[i]<0&&a[i]%2!=0)
				b[i]="ODD NEGATIVE";
			else
			if(a[i]==0)
				b[i]="NULL";
		}
		for(int i=0;i<n;i++)
			cout<<b[i]<<endl;
	}
	return 0;	
}
