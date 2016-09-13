#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string kek;
    vector<char> kek_fwd;
    vector<char> kek_bck;
    cin>>kek;
    for(int i = 0; i < kek.length(); i++)
    {
        if(!(kek[i] != 'a' && kek[i] != 'e' && kek[i] != 'i' && kek[i] != 'o' && kek[i] != 'u'))
        {
            kek_fwd.push_back(kek[i]);
            kek_bck.push_back(kek[i]);
        }
    }
    reverse(kek_bck.begin(), kek_bck.end());
    if(kek_fwd == kek_bck)
    {
        cout<<"S"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
}
