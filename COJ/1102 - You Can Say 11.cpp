#include <iostream>
using namespace std;
 
int main() 
{
	string n;
	while(cin>>n)
	{
		if(n == "0")
			break;
		long long int even_sum = 0, odd_sum = 0, r;
		for(int i = 0; i < n.length(); i++)
		{
			if(i % 2 == 0)
				even_sum += n[i] - '0';
			else
				odd_sum += n[i] - '0';
		}
		r = even_sum - odd_sum;
		if(r % 11 == 0 || r == 0)
		{
			cout<<n<<" is a multiple of 11."<<endl;
		}
		else
		{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
	return 0;
}
