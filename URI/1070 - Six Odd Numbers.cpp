#include <iostream>
using namespace std;
int main()
{
	int n,a=0;
	cin>>n;
	while(a<6)
	{
		if(n%2!=0)
		{
			cout<<n<<endl;
			n++;
			a++;
		}
		n++;
	}
	return 0;
}
