#include <bits/stdc++.h>
using namespace std;

double factorial(double n)
{
	if(n == 0 || n == 1)
		return 1.0;
	double fact = 1.0;
	for(int i = 2; i <= n; i++)
	{
		fact *= (double)i;
	}
	return fact;
}

int main()
{
	//cout<<setprecision(10);
	cout<<"n e"<<'\n';
	cout<<"- -----------"<<'\n';
	double sum = 0;
	for(int i = 0; i < 10; i++)
	{
		sum += 1/factorial(i);
		if(i > 2)
		{
			printf("%d %.9lf\n",i,sum);
		}
		else
		{
			cout<<i<<" "<<sum<<'\n';
		}
	}
	return 0;
}
