#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,z,x;
	float aux;
	vector <float> a;
	cin>>n;
	if(n>=1&&n<=100)
	{
		for(int i=0;i<n;i++)
		{	
			cin>>aux;
			if(aux<=1000)
			{
				a.push_back(aux);
				if(i==0)
				{
					z=i;
					x=aux;
				}
				else
					if(a.at(i)>=x)
					{
						z=i;
						x=aux;
					}
			}
			else return 0;
		}
		cout<<z+1<<endl;
	}
	return 0;
}
