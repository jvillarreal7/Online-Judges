#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c) != EOF)
	{
		if(a==b&&c!=a&&c!=b)
			cout<<"C"<<endl;
		else
		if(a==c&&b!=a&&b!=c)
			cout<<"B"<<endl;
		else
		if(b==c&&a!=b&&a!=c)
			cout<<"A"<<endl;
		else
			cout<<"*"<<endl;
	}
	return 0;
}
