#include <iostream>
using namespace std;
int main()
{
	int i=0,a=0,g=0,d=0;
	while(i!=4)
	{
		if(i<1||i>4)
			cin>>i;
		else
		if(i==1)
		{
			a++;
			cin>>i;
		}
		else
		if(i==2)
		{
			g++;
			cin>>i;
		}
		else
		if(i==3)
		{
			d++;
			cin>>i;
		}
	}
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<a<<endl;
	cout<<"Gasolina: "<<g<<endl;
	cout<<"Diesel: "<<d<<endl;
	return 0;
}
