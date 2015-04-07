#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cin>>a>>b>>c;
	if(a!=0.0&&(pow(b,2)-4*a*c)>=0.0)
	{
		x1=((b*-1)+sqrt(pow(b,2)-4*a*c))/(2*a);
		x2=((b*-1)-sqrt(pow(b,2)-4*a*c))/(2*a);
		printf("R1 = %.5f\n",x1);
		printf("R2 = %.5f\n",x2);
	}
	else
	cout<<"Impossivel calcular"<<endl;
	return 0;
}
