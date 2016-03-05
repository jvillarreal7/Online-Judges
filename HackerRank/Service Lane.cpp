#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width;
    for(int i = 0; i < n; i++)
    {
        int aux;
        cin>>aux;
        width.push_back(aux);
    }
    while(t--)
    {
        int min = 3;
        int x = 0, y = 0;
        cin>>x>>y;
        while(x <= y)
        {
            if(width.at(x) < min)
            {
                min = width.at(x);
            }
            x++;
        }
        cout<<min<<endl;
    }
    return 0;
}
