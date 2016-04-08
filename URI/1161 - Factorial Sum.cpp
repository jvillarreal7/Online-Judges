#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned long long int number) 
{
	unsigned long long int temp;

	if(number <= 1) return 1;

	temp = number * factorial(number - 1);
	return temp;
}

int main() 
{
	unsigned long long a, b;
	while(cin>>a>>b)
	{
		unsigned long long int s = 0;
		s += factorial(a) + factorial(b);
		cout<<s<<endl;	
	}
	return 0;
}
