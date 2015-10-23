#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int r,x1,y1,x2,y2,i = 0;
	double d,aux;
	cin>>r>>x1>>y1>>x2>>y2;
	aux = r;
	d = (sqrt(pow((x2-x1),2) + pow((y2-y1),2)));
	if(x1 == x2 && y1 == y2)
		cout<<"0"<<endl;
	else
	if(r > d)
		cout<<"1"<<endl;
	else
	{
		for(i = 0; aux < d; ++i)
		{
			if(i == 0)
			{
				aux+=r;
			}
			else
				aux+=r*2;
		}
		cout<<i<<endl;
	}
	return 0;	
}
