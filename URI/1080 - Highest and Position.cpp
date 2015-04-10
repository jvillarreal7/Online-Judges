#include <iostream>
using namespace std;
int main()
{
	int a[100]={},h=0,p=0;
	for(int i=0;i<100;i++)
	{
		cin>>a[i];
		if(a[i]>h)
		{
			h=a[i];
			p=i;
		}
		if(a[i]<1)
			return 0;
	}
	cout<<h<<endl<<p+1<<endl;
	return 0;
}
