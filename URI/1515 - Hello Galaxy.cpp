#include <iostream>
using namespace std;
int main()
{
	int n;

	while(1)
    {
        int y[100],d[100],dy,ay=2114,k;
        string a[100];
        cin>>n;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
		{
			cin>>a[i]>>y[i]>>d[i];
			if(y[i]<2014||y[i]>2113)
			return 0;
			if(d[i]<1||d[i]>1000)
			return 0;
		}
		for(int j=0;j<n;j++)
		{
			dy=y[j]-d[j];
			if(dy<ay)
			{
				ay=dy;
				k=j;
			}
		}
		cout<<a[k]<<"\n";
    }
	return 0;
}
