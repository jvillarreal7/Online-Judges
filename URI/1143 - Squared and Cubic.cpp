#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,a=1,b,c;
	cin>>x;
	while(x!=0)
	{
		cout<<a<<" "<<pow(a,2)<<" "<<pow(a,3)<<endl;
		a++;
		x--;
	}
	return 0;
}
