#include <iostream>
#include <string>
using namespace std;
 
int main() 
{
	int n;
	string t, p;
	cin>>n;
	while(n--)
	{
		cin>>t>>p;
		int counter = 0;
		while(t.find(p) != string::npos)
		{
			t.replace(t.find(p), p.length(), "");
			counter++;
		}
		cout<<counter<<endl;
	}
	return 0;
}
