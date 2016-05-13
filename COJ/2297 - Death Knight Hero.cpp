#include <iostream>
using namespace std;

int main()
{
	int cases;
	cin>>cases;
	int c = 0;
	while(cases--)
	{
		string linea;
		cin>>linea;
		bool characters2 = false;
		for(int i=0; i<linea.length(); i++)
		{
			if(linea[i]=='C' && linea[i+1]=='D')
			{
				characters2=true;
				break;
			}
		}
		if(characters2 == false)
		{
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
