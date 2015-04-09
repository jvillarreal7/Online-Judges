#include <iostream>
using namespace std;
int main()
{
	int h1,m1,h2,m2,h,m;
	cin>>h1>>m1>>h2>>m2;
	if(h1+h2<=46&&m1+m2<=118&&h1<24&&h2<24&&m1<60&&m2<60)
	{
		if(h1==h2&&m1==m2)
		{
			h=24;
			m=0;
		}
		else
		if(h1==h2&&m1>m2)
		{
			h=24-1;
			m=60-(m1-m2);
		}
		else
		if(h1==h2&&m1<m2)
		{
			h=0;
			m=m2-m1;
		}
		else
		if(h1>h2&&m1==m2)
		{
			h=24-(h1-h2);
			m=m1-m2;
		}
		else
		if(h1<h2&&m1==m2)
		{
			h=h2-h1;
			m=m1-m2;
		}
		else
		if(h1<h2&&m1<m2)
		{
			h=h2-h1;
			m=m2-m1;
		}
		else
		if(h1<h2&&m1>m2)
		{
			h=h2-h1-1;
			m=60-(m1-m2);
		}
		else
		if(h1>h2&&m1>m2)
		{
			h=24-(h1-h2)-1;
			m=60-(m1-m2);
		}
		else
		if(h1>h2&&m1<m2)
		{
			h=24-(h1-h2);
			m=m2-m1;
		}	
	}
	else return 0;
	cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
	return 0;
}
