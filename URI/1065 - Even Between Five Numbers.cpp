#include <iostream>
using namespace std;
int main()
{
	int n,a[5]={};
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			n++;
	}
	cout<<n<<" valores pares"<<endl;
	return 0;
}
