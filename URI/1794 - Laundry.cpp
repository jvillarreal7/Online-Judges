#include <iostream>
using namespace std;
int main()
{
	int n,la,lb,sa,sb;
	bool check=false;
	cin>>n;
	cin>>la>>lb>>sa>>sb;
	if(la<=n&&lb>=n&&sa<=n&&sb>=n)
		check=true;
	if(check==true)
		cout<<"possivel"<<endl;
	else
		cout<<"impossivel"<<endl;
	return 0;
}
