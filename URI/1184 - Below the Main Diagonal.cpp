#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	cout<<fixed<<setprecision(1);
	char c;
	double s = 0.0, aux, a[12][12] = {};
	int k = 1, x = 0;
	cin>>c;
	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 12; j++)
		{
			cin>>aux;
			a[i][j] = aux;
		}
	for(k; k < 12; k++)
	{
		for(int j = 0; j < k; j++)
		{
			s += a[k][j];
		}
	}
	if(c == 'S')
	{
		cout<<s<<endl;
	}
	else
	{
		cout<<s / 66.0<<endl;
	}
	return 0;
}
