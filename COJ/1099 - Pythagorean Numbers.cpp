#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c;
	while(true)
	{
		cin>>a;
		if(a==0||a>9999)
		return 0;
		else
		cin>>b>>c;
		if(b>9999||c>9999)
		return 0;
		if(a>b&&a>c)
			if((pow(b,2)+pow(c,2)==pow(a,2)))
			cout<<"right"<<endl;
			else
			cout<<"wrong"<<endl;
		else if(b>a&&b>c)
			if((pow(a,2)+pow(c,2)==pow(b,2)))
			cout<<"right"<<endl;
			else
			cout<<"wrong"<<endl;
		else if(c>a&&c>b)
			if((pow(a,2)+pow(b,2)==pow(c,2)))
			cout<<"right"<<endl;
			else
			cout<<"wrong"<<endl;
		else if(a==b&&b==c)
			cout<<"wrong"<<endl;
	}
	return 0;
}
