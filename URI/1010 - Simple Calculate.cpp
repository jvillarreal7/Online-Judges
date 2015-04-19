#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a1,a2,b1,b2;
	float q1,q2,t;
	cin>>a1>>a2>>q1;
	cin>>b1>>b2>>q2;
	t = (a2*q1)+(b2*q2);
	printf("VALOR A PAGAR: R$ %.2f\n", t);
	return 0;
}
