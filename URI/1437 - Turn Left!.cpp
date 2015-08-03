#include <iostream>
using namespace std;
int main()
{
	int n,pos=0,aux=0;
	char ins[1000];
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		cin>>ins;
		while(n>aux)
		{
			if(ins[aux]=='D')
				pos++;
			else
			if(ins[aux]=='E')
				pos--;
			if(pos>3)
				pos=0;
			if(pos<0)
				pos=3;
			aux++;
		}
		if(pos==0)
			cout<<"N"<<endl;
		else
		if(pos==1)
			cout<<"L"<<endl;
		else
		if(pos==2)
			cout<<"S"<<endl;
		else
		if(pos==3)
			cout<<"O"<<endl;
		pos=0;
		aux=0;
	}
	return 0;
}
