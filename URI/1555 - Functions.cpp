#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,y,b,c,r,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		r=pow((3*x),2)+pow(y,2);
		b=2*(pow(x,2))+pow((5*y),2);
		c=(-100*x)+pow(y,3);
		if(r>b&&r>c)
		cout<<"Rafael ganhou\n";
		else if(b>r&&b>c)
		cout<<"Beto ganhou\n";
		else if(c>r&&c>b)
		cout<<"Carlos ganhou\n";
	}
		return 0;
}
