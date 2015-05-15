#include <iostream>
using namespace std;
int main()
{
	int x=1,y=1;
	while(x!=0&&y!=0)
	{
		cin>>x>>y;
		if(x>0&&y>0)
			cout<<"primeiro"<<endl;
		else
		if(x>0&&y<0)
			cout<<"quarto"<<endl;
		else
		if(x<0&&y>0)
			cout<<"segundo"<<endl;
		else
		if(x<0&&y<0)
			cout<<"terceiro"<<endl;
	}
	return 0;
}
