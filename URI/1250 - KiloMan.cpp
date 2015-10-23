#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int s;
		cin>>s;
		int a[51]={};
		char b[51]={};
		int c = 0;
		for(int i = 0 ; i < s; i++)
		{
			int aux;
			cin>>aux;
			a[i] = aux;
		}
		for(int i = 0; i < s; i++)
		{
			char aux;
			cin>>aux;
			b[i] = aux;
		}
		for(int i = 0; i < s; i++)
		{
			if(b[i] == 'S')
			{
				if(a[i] < 3)
					c++;
			}
			else
			{
				if(a[i] > 2)
					c++;
			}
		}
		cout<<c<<endl;
	}
}
