#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	string a,b,r1,r2,r3;
	getline(cin,a);
	getline(cin,b);
	for(int i = 0; i < a.length(); i++)
	{
		if(b.find(a[i]) != string::npos)
		{
			r3 += a[i];
		}
		else
			r1 += a[i];
	}
	for(int i = 0; i < b.length(); i++)
	{
		if(a.find(b[i]) == string::npos)
		{
			r2 += b[i];
		}		
	}
	cout<<"First:"<<r1<<'\n'<<"Second:"<<r2<<'\n'<<"First&Second:"<<r3<<'\n';
	return 0;
}
