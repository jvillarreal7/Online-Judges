#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<fixed<<setprecision(2);
	int t;
	string name;
	cin>>t;
	int gs = 0, gb = 0, ga = 0, qs = 0, qb = 0, qa = 0, s1, b1, a1, s2, b2, a2;
	while(t--)
	{
		getline(cin,name);
		getline(cin,name);
		cin>>s1>>b1>>a1;
		gs += s1;
		gb += b1;
		ga += a1;
		cin>>s2>>b2>>a2;
		qs += s2;
		qb += b2;
		qa += a2;
	}
	cout<<"Pontos de Saque: "<<((double)qs/gs) * 100<<" %."<<endl;
	cout<<"Pontos de Bloqueio: "<<((double)qb/gb) * 100<<" %."<<endl;
	cout<<"Pontos de Ataque: "<<((double)qa/ga) * 100<<" %."<<endl;
	return 0;
}
