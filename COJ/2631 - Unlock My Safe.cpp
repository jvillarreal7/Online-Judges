#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int num[] = {1,2,3,4,5,6,7,8};
	int factorial[] = {1,1,2,6,24,120,720,5040,40320};
	int t,n;
	cin>>t;
	while(t--)
	{
		int l;
		cin>>n;
		l = factorial[n]/3;
		int c = 0;
		do
		{
			if(c == l)
			{
				for(int i = 0; i < n; i++)
				{
					cout<<num[i];
				}
				cout<<"\n";
			}
			c++;
		}
		while(next_permutation(num,num+n));	
	}
	return 0;
}
