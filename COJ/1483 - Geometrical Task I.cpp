#include <iostream>
using namespace std;
int main()
{
    string S;
    int A,B,R;
    cin>>S;
    if(S == "square")
    {
        cin>>A;
        R=A*A;
        cout<<R;
    }
    else
    if (S == "rectangle")
    {
        cin>>A>>B;
        R=A*B;
        cout<<R;
    }
}