#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,index;
	double dist,xt,yt,xi,yi,ri,prev=100000000;	
	while(cin>>n)
	{
		if(n==0)
			break;
		cin>>xt>>yt;
		for(int i=0;i<n;i++)
		{
			cin>>xi>>yi>>ri;
			dist=sqrt(pow(xi-xt,2)+pow(yi-yt,2))-ri;
			if(dist<prev)
			{
				index=i;
				prev=dist;
			}
		}
		cout<<index+1<<endl;
		prev=100000000;
	}
	return 0;
}
