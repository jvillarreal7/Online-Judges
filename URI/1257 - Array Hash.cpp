#include <iostream>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c = 0;
		cin>>n;
		cin.ignore();
		for(int i = 0; i < n; i++)
		{
			string hash;
			getline(cin,hash);
			for(int j = 0; j < hash.length(); j++)
			{
				c += (hash[j] - 65) + i + j;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
