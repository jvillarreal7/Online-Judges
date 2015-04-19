#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int cn,cct,vt,dz,cco,ds,uno,cinc,veint,diez,cinco,one;
    double n;
    cin>>n;
 
 	if(n>=1.00&&n<=1000000.00)
 	{
    	cn=n/100.00;
    	n=fmod(n,100.00);
    	cct=n/50.00;
    	n=fmod(n,50.00);
    	vt=n/20.00;
    	n=fmod(n,20.00);
    	dz=n/10.00;
    	n=fmod(n,10.00);
    	cco=n/5.00;
    	n=fmod(n,5.00);
    	ds=n/2.00;
    	n=fmod(n,2.00);
    	uno=n/1.00;
    	n=fmod(n,1.00);
    	cinc=n/.50;
    	n=fmod(n,.50);
    	veint=n/.25;
    	n=fmod(n,.25);
    	diez=n/.10;
    	n=fmod(n,.10);
    	cinco=n/.05;
    	n=fmod(n,.05);
    	one=n/.01;
    	cout<<"NOTAS:"<<endl;
    	cout<<cn<<" nota(s) de R$ 100.00"<<endl;
    	cout<<cct<<" nota(s) de R$ 50.00"<<endl;
    	cout<<vt<<" nota(s) de R$ 20.00"<<endl;
    	cout<<dz<<" nota(s) de R$ 10.00"<<endl;
    	cout<<cco<<" nota(s) de R$ 5.00"<<endl;
    	cout<<ds<<" nota(s) de R$ 2.00"<<endl;
    	cout<<"MOEDAS:"<<endl;
    	cout<<uno<<" moeda(s) de R$ 1.00"<<endl;
    	cout<<cinc<<" moeda(s) de R$ 0.50"<<endl;
    	cout<<veint<<" moeda(s) de R$ 0.25"<<endl;
    	cout<<diez<<" moeda(s) de R$ 0.10"<<endl;
    	cout<<cinco<<" moeda(s) de R$ 0.05"<<endl;
    	cout<<one<<" moeda(s) de R$ 0.01"<<endl;
    }
    return 0;
}
