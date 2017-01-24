#include <iostream>
using namespace std;

//Function and explanation found in: http://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
int findTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n/i >= 1; i *= 5)
          count += n/i;
    return count;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
		int aux;
		cin>>aux;
		cout<<findTrailingZeros(aux)<<'\n';
	}
	return 0;
}
