#include <iostream>
using namespace std;
int main()
{
	char a[5]={},b[5]={};
	int aux=0;
	bool check=false;
	for(int i=0;i<5;i++)
		cin>>a[i];
	for(int j=0;j<5;j++)
		cin>>b[j];
	for(int k=0;k<5;k++)
	{
		if(a[k]!=b[k])
			aux++;
	}
	if(aux==5)
		check=true;
	if(check==true)
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
	return 0;	
}
