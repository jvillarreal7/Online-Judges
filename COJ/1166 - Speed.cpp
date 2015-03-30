#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x=0,y=0,n,m,aux;
	vector <int> a;
	cin>>n;
	for(int i=0;i<n;i++)
    {
    	cin>>m;
		for(int j=0;j<m;j++)
    	{
			cin>>aux;
    		a.push_back(aux);
		}
		for(int k=0;k<m;k++)
		{
			if(a.at(k)%2==0)
			x++;
			else
			y++;
		}
		cout<<x<<" even and "<<y<<" odd."<<endl;
		x=0;
		y=0;
		a.clear();
    }
    return 0;
}
