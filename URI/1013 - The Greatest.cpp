#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,a,b,c,x,y;
	cin>>a>>b>>c;
	x=(a+b+abs(a-b))/2;
	y=(x+c+abs(x-c))/2;
	if(y>x)
	cout<<y<<" eh o maior"<<endl;
	else
	cout<<x<<" eh o maior"<<endl;
	return 0;
}
