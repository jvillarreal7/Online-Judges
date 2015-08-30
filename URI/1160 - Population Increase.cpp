#include <iostream>
using namespace std;
int main()
{
	int t,pa,pb;
	double g1,g2;
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		cin>>pa>>pb>>g1>>g2;
		int i;
		g1/=100.0;
		g2/=100.0;
		for(i=1;pa<pb;i++)
		{	
			pa+=(pa*g1);
			pb+=(pb*g2);
			if(pa>pb)
			{
				break;
			}
		}
		if(i>100)
			cout<<"Mais de 1 seculo.\n";
		else
			cout<<i<<" anos.\n";
	}
	return 0;
}
