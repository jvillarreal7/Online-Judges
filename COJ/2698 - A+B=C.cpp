#include <iostream>
using namespace std;

int main() 
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	string s;
	cin>>s;
	int sum = 0;
	for(int i = 0; i < s.length(); i++)
	{
		sum += s[i] - 64;
	}
	cout<<sum<<'\n';
	return 0;
}
