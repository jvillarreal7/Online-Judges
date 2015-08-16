#include <iostream>
using namespace std;
int main()
{
	int n[1000]={},t,a=0;
	cin>>t;
	for(int i=0;i<1000;i++)
	{
		n[i]=a;
		cout<<"N["<<i<<"] = "<<a<<endl;
		if(a<t-1)
			a++;
		else
			a=0;
	}
	return 0;
}
