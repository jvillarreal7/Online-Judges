#include <iostream>
using namespace std;

int main()
{
	char c[51] = {};
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>c[i];
	}
	int k = 0;
	for(int j = 0; j < n; j++)
	{
		if(c[j]!=c[j+1])
			continue;
		else
			k++;
	}
	cout<<k<<endl;
	return 0;
}
