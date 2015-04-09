#include <iostream>
using namespace std;
int main()
{
	float a[6];
	int n;
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
		if(a[i]>0)
			n++;
	}
	cout<<n<<" valores positivos"<<endl;
	return 0;
}
