#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() 
{
	cout<<fixed<<setprecision(2);
	int t;
	cin>>t;
	while(t--)
	{
		map<string,double> m;
		int pr;
		cin>>pr;
		for(int i = 0; i < pr; i++)
		{
			string name;
			double price;
			cin>>name>>price;
			m[name] = price;
		}
		int b;
		double sum = 0.0;
		cin>>b;
		for(int i = 0; i < b; i++)
		{
			string name;
			int qt;
			cin>>name>>qt;
			sum += m[name] * qt;
		}
		cout<<"R$ "<<sum<<endl;
	}
	return 0;
}
