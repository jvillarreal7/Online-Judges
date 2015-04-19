#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a[6]={},b=0,c=0;
	int n=0;
	cout<<fixed<<setprecision(1);
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		{
			n++;
			b+=a[i];
		}
	}
	for(int i=0;i<n;i++)
		c=b/n;
	cout<<n<<" valores positivos"<<endl;
	cout<<c<<endl;
	return 0;
}
