#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float s,r,p;
	int pr;
	cin>>s;
	cout<<fixed<<setprecision(2);
	if(s<=400.00)
		p=.15;
	else
	if(s>=400.01&&s<=800.00)
		p=.12;
	else
	if(s>=800.01&&s<=1200.00)
		p=.10;
	else
	if(s>=1200.01&&s<=2000.00)
		p=.07;
	else
	if(s>=2000.01)
		p=.04;
	r=s*p;
	s+=r;
	cout<<"Novo salario: "<<s<<endl;
	cout<<"Reajuste ganho: "<<r<<endl;
	cout<<setprecision(0)<<"Em percentual: "<<p*100<<" %"<<endl;
	return 0;
}
