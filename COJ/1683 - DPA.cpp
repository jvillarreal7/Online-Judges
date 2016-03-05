#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum = 0, aux;
		cin>>aux;
		for(int i = 1; i < aux; i++)
		{
			if(aux % i == 0)
			{
				sum += i;
			}
		}
		if(sum < aux)
		{
			cout<<"Deficient"<<'\n';
		}
		else
		if(sum == aux)
		{
			cout<<"Perfect"<<'\n';
		}
		
		else
			cout<<"Abundant"<<'\n';
	}
	return 0;
}
