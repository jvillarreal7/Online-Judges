#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
	int n;
	float a1,a2,a3,p;
	vector <float> wa;
	cout<<fixed<<setprecision(1);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a1>>a2>>a3;
		p=((a1)*(2.0)+(a2)*(3.0)+(a3)*(5.0))/(2.0+3.0+5.0);
		wa.push_back(p);
	}
	for(int i=0;i<n;i++)
		cout<<wa.at(i)<<endl;
	return 0;
}
