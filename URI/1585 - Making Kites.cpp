#include <iostream>
using namespace std;
int main()
{
	double n,x,y,a;
	cin>>n;
	while(n!=0)
	{
		cin>>x>>y;
		a=(x*y)/2.0;
		cout<<(int)a<<" cm2"<<endl;
		n--;
	}
	return 0;
}
