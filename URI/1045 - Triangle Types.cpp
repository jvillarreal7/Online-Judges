#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	double a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3,greater<int>());
	if(a[0]>=(a[1]+a[2]))
	{
		cout<<"NAO FORMA TRIANGULO"<<endl;
		return 0;
	}
	if(pow(a[0],2)==(pow(a[1],2)+(pow(a[2],2))))
		cout<<"TRIANGULO RETANGULO"<<endl;
	if(pow(a[0],2)>(pow(a[1],2)+(pow(a[2],2))))
		cout<<"TRIANGULO OBTUSANGULO"<<endl;
	if(pow(a[0],2)<(pow(a[1],2)+(pow(a[2],2))))
		cout<<"TRIANGULO ACUTANGULO"<<endl;
	if(a[0]==a[1]&&a[1]==a[2])
		cout<<"TRIANGULO EQUILATERO"<<endl;
	if(a[0]==a[1]&&a[2]!=a[1])
		cout<<"TRIANGULO ISOSCELES"<<endl;
	if(a[1]==a[2]&&a[0]!=a[2])	
		cout<<"TRIANGULO ISOSCELES"<<endl;
	if(a[2]==a[0]&&a[1]!=a[0])
		cout<<"TRIANGULO ISOSCELES"<<endl;
	return 0;
}
