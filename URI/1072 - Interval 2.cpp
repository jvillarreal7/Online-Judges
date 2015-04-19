#include <iostream>
using namespace std;
int main()
{
	int n,a,in=0,out=0;
	cin>>n;
	if(n<10000)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>=10&&a<=20)
				in++;
			else
				out++;
		}
		cout<<in<<" in"<<endl;
		cout<<out<<" out"<<endl;
	}
	return 0;
}
