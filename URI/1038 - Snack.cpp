#include <iostream>
using namespace std;
int main()
{
	int c,q;
	float p,t;
	cin>>c>>q;
	if(c>0&&c<6)
	{
		if(c==1)
		p=4.00;
		else if(c==2)
		p=4.50;
		else if(c==3)
		p=5.00;
		else if(c==4)
		p=2.00;
		else if(c==5)
		p=1.50;
	}
	t=p*q;
	printf("Total: R$ %.2f\n",t);
	return 0;
}
