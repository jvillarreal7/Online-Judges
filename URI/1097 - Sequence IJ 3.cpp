#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int j = 7;
	while(j >= 5)
	{
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
		j--;
	}
	i += 2;
	j = 9;
	while(j >= 7)
	{
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
		j--;
	}
	i += 2;
	j = 11;
	while(j >= 9)
	{
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
		j--;
	}
	i += 2;
	j = 13;
	while(j >= 11)
	{
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
		j--;
	}
	i += 2;
	j = 15;
	while(j >= 13)
	{
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
		j--;
	}
	return 0;
}
