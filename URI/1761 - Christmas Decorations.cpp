#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	cout<<fixed<<setprecision(2);
	//a = angle; b = distance; c = elf dude height;
	double a,b,c;
	while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
	{
		double rAngle = 90.0 - a;
		double treeHeight = (b / tan(rAngle * 3.141592654 / 180.0) + c);
		double lightsHeight = treeHeight * 5.0;
		cout<<lightsHeight<<endl;
	}
	return 0;
}
