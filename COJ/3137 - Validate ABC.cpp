#include <iostream>
using namespace std;
int main()
{
	int a,b,c,t;
	cin>>t;
	while(t!=0)
	{
		bool cp=false;
		cin>>a>>b>>c;
		if(a+b==c)
			cp=true;
		else
		if(a-b==c)
			cp=true;
		else
		if(a*b==c)
			cp=true;
		else
		if(a/b==c)
			cp=true;
		else
		if(a%b==c)
			cp=true;
		if(cp==false)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		t--;
	}
	return 0;		
}
