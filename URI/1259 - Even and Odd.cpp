#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> even;
	vector<int> odd;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n % 2 == 0)
		{
			even.push_back(n);
		}
		else
		{
			odd.push_back(n);
		}
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	reverse(odd.begin(), odd.end());
	for(int i = 0; i < even.size(); i++)
	{
		cout<<even[i]<<endl;
	}
	for(int i = 0; i < odd.size(); i++)
	{
		cout<<odd[i]<<endl;
	}
	return 0;
}
