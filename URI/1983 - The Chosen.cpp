#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int t;
	map<int,double> m;
	bool flag = false;
	cin>>t;
	while(t--)
	{
		int aux;
		double aux2;
		cin>>aux>>aux2;
		m[aux] = aux2;
		if(aux2 >= 8)
			flag = true;
	}
	if(flag == true)
	{
		map<int,double>::iterator it;
		double max = 0.0;
		int id;
		for(it = m.begin(); it != m.end(); it++)
		{
			if(max < (*it).second)
			{
				id = (*it).first;
				max = (*it).second;
			}
		}
		cout<<id<<endl;
	}
	else
	{
		cout<<"Minimum note not reached"<<endl;
	}
	return 0;
}
