#include <iostream>
using namespace std;
int main()
{
	int n,t1,t2;
	string x;
	cin>>n;
	while(n--)
	{
		cin>>t1>>x>>t2;
		int pt1 = 0;
		int pt2 = 0;
		int vt1 = 0;
		int vt2 = 0;
		int dif1 = t1 - t2;
		int dif2 = t2 - t1;
		if(t1 > t2)
		{
			pt1 += 3;
			vt2 = t2;
		}
		else
		if(t2 > t1)
		{
			pt2 += 3;
			vt2 = t2;
		}
		else
		{
			pt1 += 1;
			pt2 += 1;
			vt2 = t2;
		}
		cin>>t2>>x>>t1;
		dif1 += (t1 - t2);
		dif2 += (t2 - t1);
		if(t1 > t2)
		{
			pt1 += 3;
			vt1 = t1;
		}
		else
		if(t2 > t1)
		{
			pt2 += 3;
			vt1 = t1;
		}
		else
		{
			pt1 += 1;
			pt2 += 1;
			vt1 = t1;
			
		}
		if(pt1 > pt2)
		{
			cout<<"Time 1"<<endl;
		}
		else
		if(pt2 > pt1)
		{
			cout<<"Time 2"<<endl;
		}
		else
		if(pt1 == pt2)
		{
			if(dif1 > dif2)
			{
				cout<<"Time 1"<<endl;
			}
			else
			if(dif1 < dif2)
			{
				cout<<"Time 2"<<endl;
			}
			else
			if(dif1 == dif2)
			{
				if(vt1 > vt2)
				{
					cout<<"Time 1"<<endl;
				}
				else
				if(vt1 < vt2)
				{
					cout<<"Time 2"<<endl;
				}
				else
					cout<<"Penaltis"<<endl;
			}
		}
		//cout<<"Puntos Eq. 1: "<<pt1<<endl<<"Puntos Eq. 2: "<<pt2<<endl<<"Diferencia Eq. 1: "<<dif1<<endl<<"Diferencia Eq. 2: "<<dif2<<endl;
		//cout<<"Goles visitante 1: "<<vt1<<endl<<"Goles visitante 2: "<<vt2<<endl;
	}
	return 0;
}
