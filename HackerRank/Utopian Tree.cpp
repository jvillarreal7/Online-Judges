#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int treeSize = 1;
        int cycles;
        cin>>cycles;
        for(int i = 0; i < cycles; i++)
        {
            if(i % 2 == 0)
            {
                treeSize *= 2;
            }
            else
                treeSize += 1;
        }
        cout<<treeSize<<endl;
    }    
    return 0;
}
