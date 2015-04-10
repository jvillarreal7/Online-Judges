#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,a,tan=0,tc=0,tr=0,ts=0;
	double pcc=0.0,pcr=0.0,pcs=0.0,tcd,trd,tsd;
	char type;
	cout<<fixed<<setprecision(2);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>type;
		if(a>=1&&a<=15)
		{
			if(type=='C')
				tc+=a;
			else
			if(type=='R')
				tr+=a;
			else
			if(type=='S')
				ts+=a;
			else return 0;
		}
	}
		tan=tc+tr+ts;
		tcd=tc;
		trd=tr;
		tsd=ts;
		pcc=(tcd/tan)*100.00;
		pcr=(trd/tan)*100.00;
		pcs=(tsd/tan)*100.00;
		cout<<"Total: "<<tan<<" cobaias"<<endl;
		cout<<"Total de coelhos: "<<tc<<endl;
		cout<<"Total de ratos: "<<tr<<endl;
		cout<<"Total de sapos: "<<ts<<endl;
		cout<<"Percentual de coelhos: "<<pcc<<" %"<<endl;
		cout<<"Percentual de ratos: "<<pcr<<" %"<<endl;
		cout<<"Percentual de sapos: "<<pcs<<" %"<<endl;
	return 0;
}
