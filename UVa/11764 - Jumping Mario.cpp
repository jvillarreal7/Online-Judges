#include <iostream>
using namespace std;
int main()
{
	int t,n,jump,c=0;
	cin>>t;
	while(t--)
	{
		int hi=0,lo=0,aux;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>jump;
			if(i!=0)
			{
				if(aux<jump)
				{
					hi++;
					aux=jump;	
				}
				else
				if(aux>jump)
				{
					lo++;
					aux=jump;
				}
			}
			else
				aux=jump;
		}
		c++;
		cout<<"Case "<<c<<": "<<hi<<" "<<lo<<endl;
	}
}
