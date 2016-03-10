#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout<<fixed<<setprecision(1);
	int t;
	double h, d, s;
	s = 0.0;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		cin>>h>>d;
		double aux = h - ((pow(h,2) + pow(d,2)) / (2 * h));
		cout<<aux<<'\n';
		s += aux;
	}
	cout<<s / t<<'\n';
	return 0;
}
