#include <iostream>
using namespace std;

int main() 
{
	string s;
	int t, f;
	cin>>t;
	while(t--)
	{
		cin>>s>>f;
		if(s == "Thor")
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}
