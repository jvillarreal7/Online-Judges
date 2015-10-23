#include <iostream>
using namespace std;

int main()
{
	int n,la,lb,sa,sb;
	bool flag1 = false;
	bool flag2 = false;
	cin>>n>>la>>lb>>sa>>sb;
	if(n >= la && n <= lb)
		flag1 = true;
	if(n >= sa && n <= sb)
		flag2 = true;
	if(flag1 == true && flag2 == true)
	{
		cout<<"possivel"<<endl;
	}
	else
		cout<<"impossivel"<<endl;
	return 0;
}
