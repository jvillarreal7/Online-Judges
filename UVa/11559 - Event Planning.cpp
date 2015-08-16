#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long blim=500001,n,b,h,w,p,a,subt,total;
	while(scanf("%ld %ld %ld %ld",&n,&b,&h,&w)!=EOF)
	{
		total=blim;
		for(int i=0;i<h;i++)
		{
			scanf("%d",&p);
			for(int j=0;j<w;j++)
			{
				scanf("%d",&a);
				if(a>=n)
				{
					subt=n*p;
					if(subt<=b&&subt<total)
						total=subt;
				}
			}
		}
		if(total==blim)
			cout<<"stay home"<<endl;
		else
			cout<<total<<endl;
	}
	return 0;
}
