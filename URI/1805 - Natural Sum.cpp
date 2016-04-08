#include <iostream>
using namespace std;

int main() 
{
	unsigned long long int a, b, c;
	cin>>a>>b;
	unsigned long long int s = 0;
	c = (b - a) + 1;
	s = (a + b)* c / 2;
	cout<<s<<endl;
	return 0;
}
