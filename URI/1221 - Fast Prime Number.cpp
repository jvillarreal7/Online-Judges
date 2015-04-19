#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    long x,a;
    cin>>n;
    while(n--)
	{
		    bool y=true;
			cin>>x;
			    a=sqrt(x);
                for(int i=2;i<=a;i++)
                {
                    if((x%i)==0)
                    {
                        y=false;
                        break;
                    }
                }
                if(y)
                cout<<"Prime\n";
            else
                cout<<"Not Prime\n";
        }
    return 0;
}
