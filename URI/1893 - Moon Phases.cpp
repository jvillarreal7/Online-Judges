#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(a < b)
	{
		if(b <= 2)
		{
			cout<<"nova"<<endl;
		}
		else
		if(b <= 96)
		{
			cout<<"crescente"<<endl;
		}
		else
		if(b <= 100)
		{
			cout<<"cheia"<<endl;
		}
	}
	else
	if(a > b)
	{	
		if(b <= 100 && b >= 97)
		{
			cout<<"cheia"<<endl;
		}
		else
		if(b >= 3 && b <= 96)
		{
			cout<<"minguante"<<endl;
		}
		else
		if(b <= 2)
		{
			cout<<"nova"<<endl;
		}
	}
	else
	{
		if(a <= 100 && a >= 97)
		{
			cout<<"cheia"<<endl;
		}
		else
		if(a >= 0 && a <= 2)
		{
			cout<<"nova"<<endl;
		}
		else
		if(a >= 3 && a <= 96)
		{
			cout<<"minguante"<<endl;
		}
	}
	return 0;
}
