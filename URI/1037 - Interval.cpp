#include <iostream>
using namespace std;
int main()
{
	float n;
	cin>>n;
	if(n>=0&&n<=100)
	{
		if(n>=0&&n<=25.0000)
			cout<<"Intervalo [0,25]"<<endl;
		if(n>=25.00001&&n<=50.0000000)
			cout<<"Intervalo (25,50]"<<endl;
		if(n>=50.00000001&&n<=75.00000000)
			cout<<"Intervalo (50,75]"<<endl;
		if(n>=75.000000001&&n<=100.00000000000)
			cout<<"Intervalo (75,100]"<<endl;
	}
	else
	cout<<"Fora de intervalo"<<endl;
	return 0;
}
