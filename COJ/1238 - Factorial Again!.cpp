#include <iostream>
using namespace std;

unsigned long long int factorial(int n)
{
    unsigned long long int fact;
    if (n == 0)
        return 1;
    else
         return n * factorial(n - 1);
} 

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	string n;
	while(cin>>n)
	{
		if(n == "0")
			break;
		int s = n.length();
		long long int sum = 0;
		for(int i = 0; i < n.length(); i++)
		{
			int d = n[i] - '0';
			sum += d * factorial(s);
			s--;
		}
		cout<<sum<<'\n';
	}
	return 0;
}
