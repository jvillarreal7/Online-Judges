#include <iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    if(n<=1)
    {
      for(int i=n;i<=1;i++)
        s+=i;
    }
    else
        for(int i=1;i<=n;i++)
        s+=i;
    cout<<s;
    return 0;
}