#include <iostream>
using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int counter = 0;
        while(n--)
        {
            int aux;
            cin>>aux;
            if(aux <= 0)
            {
                counter++;
            }
        }
        if(k <= counter)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
