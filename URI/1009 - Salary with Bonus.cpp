#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string nom;
	double s,b;
	cin>>nom>>s>>b;
	b=(b*.15)+s;
	cout<<"TOTAL = R$ "<<setprecision(2)<<fixed<<b<<endl;
	return 0;
}
