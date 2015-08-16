#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	char w[5]={};
	cin>>n;
	getchar();
	while(n--)
	{
		gets(w);
		if(strlen(w)>3)
			cout<<"3"<<endl;
		else
		if(strlen(w)==3)
		{
			if(w[0]=='o'||w[1]=='n'||w[2]=='e')
				cout<<"1"<<endl;
			else
				cout<<"2"<<endl;
		}
	}
	return 0;
}
