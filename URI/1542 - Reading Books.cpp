#include <iostream>
using namespace std;

int main()
{
	int q,d,p;
	while(cin>>q)
	{
		if(q == 0)
			break;
		cin>>d>>p;		
		double aux = ((double)q*(double)d)/((double)p-(double)q)*(double)p;
		if((int)aux == -1 || (int)aux == 1)
			cout<<(int)aux<<" pagina"<<endl;		
		else
			cout<<(int)aux<<" paginas"<<endl;	
	}
	return 0;
}
