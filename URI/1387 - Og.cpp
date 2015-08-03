#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(1)
	{
		cin>>a>>b;
		if(a<1||b<1||a>5||b>5)
			break;
		else
		cout<<a+b<<endl;
	}
	return 0;
}
