#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int k = 0;
		cin>>n;
		int s[1000] = {};
		for(int i = 0; i < n; i++)
		{
			cin>>s[i];
			k += s[i];
		}
		int avg = k / n;
		int c = 0;
		for(int i = 0; i < n; i++)
		{
			if(s[i] > avg)
				c++;
		}
		cout<<fixed<<setprecision(3);
		double r = (double)c / (double)n * 100;
		cout<<r<<"%"<<endl;
	}
	return 0;
}
