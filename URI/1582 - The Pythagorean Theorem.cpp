#include <iostream>
#include <algorithm>
using namespace std;
bool pyth(int a[]);
int cd(int x,int y);
int main()
{
    int a[3]={0};
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a,a+3);
        if(pyth(a))
        {
            if(cd(a[1],a[0])==1 && cd(a[2],a[0])==1 && cd(a[2],a[1])==1)
            {

                cout<<"tripla pitagorica primitiva"<<endl;
            }
            else
            {

                cout<<"tripla pitagorica"<<endl;
        }
    }
            else
               cout<<"tripla"<<endl;
}
            return 0;
}
        int cd(int x,int y)
        {
            if (x%y==0)
            return y;
            else
            cd(y,x%y);
        }
        bool pyth(int a[])
        {
            bool p=true;
            int hip=0,hip2=0;
            hip=a[2]*a[2];
            hip2=((a[0]*a[0])+(a[1]*a[1]));
            if(hip==hip2)
            return p;
            else
            return false;
        }
