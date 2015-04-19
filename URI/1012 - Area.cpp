#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c,atr,ac,at,as,ar,pi=3.14159;
	cin>>a>>b>>c;
	atr=(a*c)/2.0;
	ac=pi*pow(c,2.0);
	at=((a+b)*c)/2.0;
	as=b*b;
	ar=a*b;
	printf("TRIANGULO: %.3f\n",atr);
	printf("CIRCULO: %.3f\n",ac);
	printf("TRAPEZIO: %.3f\n",at);
	printf("QUADRADO: %.3f\n",as);
	printf("RETANGULO: %.3f\n",ar);
	return 0;
}
