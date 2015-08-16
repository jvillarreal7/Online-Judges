#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int d,c=0;
	double tdist=0.0;
	string name;
	cout<<fixed<<setprecision(1);
	while(getline(cin,name))
	{
		cin>>d;
		tdist+=d;
		c++;
		getchar();
	}
	cout<<tdist/c<<endl;
	return 0;
}
