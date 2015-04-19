#include <iostream>
using namespace std;
int main()
{
	float a,b,c,p,ar;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&a+c>b)
	{
		p=a+b+c;
		printf("Perimetro = %.1f\n",p);
	}
	else
	{
		ar=0.5*(a+b)*c;
		printf("Area = %.1f\n",ar);
	}
	return 0;
}
