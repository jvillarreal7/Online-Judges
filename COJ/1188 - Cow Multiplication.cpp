#include <iostream>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int r = 0;
	for(int i = 0; i < a.length(); i++)
		for(int j = 0; j < b.length(); j++)
		{
			int t1 = a[i] - '0';
			int t2 = b[j] - '0';
			r += (t1 * t2);	
		}
	cout<<r<<endl;
	return 0;
}
