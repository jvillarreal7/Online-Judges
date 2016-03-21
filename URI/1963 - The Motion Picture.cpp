#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	cout<<fixed<<setprecision(2);
	double a, b;
	cin>>a>>b;
	double r = b - a;
	r /= a;
	r *= 100;
	cout<<r<<"%"<<endl;
	return 0;
}
