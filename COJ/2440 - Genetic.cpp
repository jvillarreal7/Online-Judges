#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	string first,second;
	cin>>t;
	while(t--)
	{
		cin>>first>>second;
		if(count(first.begin(),first.end(),'T')&&(first.find(second)!=second.npos))
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
}
