#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	int t,n,hist[105]={},pos=0;
	string instr;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin.ignore();
		for(int i=1;i<=n;i++)
		{
			getline(cin,instr);
			if(instr=="LEFT")
			{
				pos-=1;
				hist[i]=-1;
			}
			else
			if(instr=="RIGHT")
			{
				pos+=1;
				hist[i]=1;
			}
			else
			{
				std::string str(instr);
			    std::string temp;
			    int number=0;
			    
			    for (unsigned int j=0; j < str.size(); j++)
			    {
			        if (isdigit(str[j]))
			        {
			            for (unsigned int a=j; a<str.size(); a++)
			            {
			                temp += str[a];               
			            }
			          break;
			        }    
			    }			    
			    std::istringstream stream(temp);
			    stream >> number;
			    pos+=hist[number];
			    hist[i] = hist[number];
			}
		}
		cout<<pos<<endl;
		pos=0;
	}
	return 0;
}
