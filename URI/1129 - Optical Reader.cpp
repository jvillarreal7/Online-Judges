#include <iostream>
using namespace std;
int main()
{
	int n,b=0,w=0;
	char letter;
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		while(n--)	
		{
			int a[5]={};
			cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
			for(int i=0;i<5;i++)
			{
				if(a[i]<=127)
				{
					b++;
					if(i==0)
						letter='A';
					else
					if(i==1)
						letter='B';
					else
					if(i==2)
						letter='C';
					else
					if(i==3)
						letter='D';
					else
					if(i==4)
						letter='E';
				}
				else
					w++;
			}
			if(b>1)
				cout<<"*"<<endl;
			else
			if(w==5)
				cout<<"*"<<endl;
			else
			if(w==4&&b==1)
				cout<<letter<<endl;
			b=0;
			w=0;
		}
	}
	return 0;
}
