//Note: Left debug lines 'untouched' intentionally, might come handy to someone trying to understand what's going on.
//Also don't be a fool like me and waste time trying to solve this with char arrays/strings, it takes like twice the lines of code and is prone to silly mistakes, don't do it. :P

#include <iostream>
using namespace std;

int main()
{	
	int n,m;
	while(cin>>n>>m)
	{
		if(n == 0 && m == 0)
			break;
		int temp1,temp2,mod1 = 1,mod2 = 1,c = 0;
		temp1 = n;
		temp2 = m;
		bool carry = false;
		for(int i = 0; i < 10; i++)
		{
			mod1 = temp1 % 10;
			//cout<<"mod1 = "<<mod1<<endl;
			temp1 /= 10;
			//cout<<"temp1 = "<<temp1<<endl;
			mod2 = temp2 % 10;
			//cout<<"mod2 = "<<mod2<<endl;
			temp2 /= 10;
			//cout<<"temp2 = "<<temp2<<endl;
			if((mod1 + mod2) > 9 && carry == false)
			{
				carry = true;
				//cout<<"Cycle 1"<<endl;
			}
			else
			if((mod1 + mod2) > 9 && carry == true)
			{
				c++;
				//cout<<"Cycle 2"<<endl;
			}
			else
			if((mod1 + mod2) < 10 && carry == true)
			{
				c++;
				//cout<<"Cycle 3"<<endl;
				if((mod1 + mod2 + 1) < 10)
				{
					carry = false;
					//cout<<">>Cycle 4"<<endl;
				}
			}		
		}
		if(c == 0)
			cout<<"No carry operation."<<endl;
		else
		if(c == 1)
			cout<<c<<" carry operation."<<endl;
		else
			cout<<c<<" carry operations."<<endl;
	}
	return 0;
}
