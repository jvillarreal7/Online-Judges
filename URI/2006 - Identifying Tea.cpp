#include <iostream>
using namespace std;

int main() 
{
	char c, a[5] ={};
	int counter = 0;
	cin>>c;
	for(int i = 0; i < 5; i++)
	{
		cin>>a[i];
		if(a[i] == c)
			counter++;
	}
	cout<<counter<<endl;
	return 0;
}
