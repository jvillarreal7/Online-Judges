#include <iostream>
using namespace std;

long long int Collatz(long long int x);

int main()
{
	long long int max, maxn;
	long long int i, j;
	
	while(cin>>i>>j)
	{
		max = 0;
		maxn = 0;
		
		cout<<i<<" "<<j<<" ";
		
		if (i > j) {
			int temp = j;
			j = i;
			i = temp;
		}
		
		for(i; i <= j; i++) {
			maxn = Collatz(i);
			
			if(maxn > max)
				max = maxn;
		}
		cout<<max<<endl;
	}
}

long long int Collatz(long long int x) {
    //If number equalz 1, stop recursion
    if (x == 1)
        return 1;
        
    //Check if the number is odd
    else if ((x % 2) == 0)
        return 1 + Collatz(x / 2);
    
    //Check if the number is even
    else if ((x % 2) != 0)
        return 1 + Collatz(3 * x + 1);
    
    //Error
    else
        return  -1;
}
