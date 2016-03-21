#include <iostream>
using namespace std;

int main()
{
	int n, min = 21, index;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		int t;
		cin>>t;
		if(t < min)
		{
			min = t;
			index = i + 1;
		}
	}
	cout<<index<<endl;
	return 0;
}
