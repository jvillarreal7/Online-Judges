#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	string P;
	double t,lvl,hp[3]={},atk[3]={},def[3]={},spe[3]={},totalhp,totalatk,totaldef,totalspe;
	cin>>t;
	//0 -> base stat; 1 -> IV; 2 -> EV.
	for(int i=1;i<=t;i++)
	{
		cin>>P>>lvl;
		cin>>hp[0]>>hp[1]>>hp[2];
		cin>>atk[0]>>atk[1]>>atk[2];
		cin>>def[0]>>def[1]>>def[2];
		cin>>spe[0]>>spe[1]>>spe[2];
		totalhp=(((hp[1]+hp[0]+sqrt(hp[2])/8.0+50.0)*lvl)/50.0)+10.0;
		totalatk=(((atk[1]+atk[0]+sqrt(atk[2])/8.0)*lvl)/50.0)+5.0;
		totaldef=(((def[1]+def[0]+sqrt(def[2])/8.0)*lvl)/50.0)+5.0;
		totalspe=(((spe[1]+spe[0]+sqrt(spe[2])/8.0)*lvl)/50.0)+5.0;
		cout<<"Caso #"<<i<<": "<<P<<" "<<"nivel "<<lvl<<endl;
		cout<<"HP: "<<(int)totalhp<<endl;
		cout<<"AT: "<<(int)totalatk<<endl;
		cout<<"DF: "<<(int)totaldef<<endl;
		cout<<"SP: "<<(int)totalspe<<endl;
	}
	return 0;
}
