#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	long long int a,b,c;
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0)
			break;
		c=a+b;
		stringstream ss;
		ss<<c;
		string str=ss.str();
		char chars[]="0";
		for(unsigned int i=0;i<strlen(chars);i++)
   		{
      		str.erase(std::remove(str.begin(),str.end(),chars[i]),str.end());
   		}
   		cout<<str<<endl;
	}
	return 0;
}
