#include <iostream>
using namespace std;

int main() 
{
	int a, n;
	cin>>a>>n;
	while(n <= 0)
	{
		cin>>n;
	}
	int s = 0;
	int temp = a;
	while(n--)
	{
		s += temp;
		temp++;
	}
	cout<<s<<endl;
	return 0;
}
