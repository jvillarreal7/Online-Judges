#include <iostream>
using namespace std;
int main()
{
    int n,a,cn,cct,vt,dz,cco,ds,uno;
    cin>>n;
    a=n;
 
    cn=n/100;
    n=n%100;
    cct=n/50;
    n=n%50;
    vt=n/20;
    n=n%20;
    dz=n/10;
    n=n%10;
    cco=n/5;
    n=n%5;
    ds=n/2;
    n=n%2;
    uno=n/1;
    cout<<a<<endl;
    cout<<cn<<" nota(s) de R$ 100,00"<<endl;
    cout<<cct<<" nota(s) de R$ 50,00"<<endl;
    cout<<vt<<" nota(s) de R$ 20,00"<<endl;
    cout<<dz<<" nota(s) de R$ 10,00"<<endl;
    cout<<cco<<" nota(s) de R$ 5,00"<<endl;
    cout<<ds<<" nota(s) de R$ 2,00"<<endl;
    cout<<uno<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
