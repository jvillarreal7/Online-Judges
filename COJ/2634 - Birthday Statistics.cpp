#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <locale>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int t,id;
	string date;
	map<int,string> m;
	cin>>t;
	while(t--)
	{
		cin>>id>>date;
		m[id]=date;	
	}
	
	map<int,int> final;
	final[1]=0;
	final[2]=0;
	final[3]=0;
	final[4]=0;
	final[5]=0;
	final[6]=0;
	final[7]=0;
	final[8]=0;
	final[9]=0;
	final[10]=0;
	final[11]=0;
	final[12]=0;
	
	map<int,string>::iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
		string sub;
		size_t s = (*it).second.find('/');
		size_t e = (*it).second.find('/', s);
		sub = (*it).second.substr(s + 1, e - s -1);
		if(sub.length()==7)
		{
			sub.erase(2,7);
		}
		else
			sub.erase(1,6);
		final[atoi(sub.c_str())]+=1;
	}
	map<int,int>::iterator at;
	for(at = final.begin(); at != final.end(); at++)
	{
		cout<<at->first<<" "<<at->second<<endl;
	}
}
