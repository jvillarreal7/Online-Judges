#include <iostream>
using namespace std;

int main() 
{
	long long int n;
	while(cin>>n)
	{
		long long int s = 0;
		string m;
		cin>>m;
		for(int i = 0; i < m.length(); i++)
		{
			s += m[i] - '0';
		}
		if(s % 3 == 0)
		{
			cout<<s<<" sim"<<endl;
		}
		else
		{
			cout<<s<<" nao"<<endl;
		}
	}
	return 0;
}
