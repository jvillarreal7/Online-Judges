#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		if(n < 0)
			break;
		if(n == 0)
			cout<<0;
		vector<int> v;
		while(n > 0)
		{
			v.push_back(n % 3);
			n /= 3;
		}
		reverse(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++)
		{
			cout<<v[i];
		}
		cout<<endl;
	}
	return 0;
}
