#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	string a,b;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int c = 0;
		getline(cin,a);
		size_t pos = a.find(' ');
		b = a.substr(pos+1);
		a.erase(pos);
		for(int i = 0; i < a.length(); i++)
		{
			if(a[i]!=b[i])
			{
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
