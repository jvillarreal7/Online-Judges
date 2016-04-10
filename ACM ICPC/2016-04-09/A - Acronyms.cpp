#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	string s1;
	while(getline(cin,s1))
	{
		bool flag = true;
		string a1;
		getline(cin,a1);
		vector<char> v1;
		vector<char> v2;
		v1.push_back(s1[0]);
		for(int i = 0; i < s1.length(); i++)
		{
			if(s1[i] == ' ')
			{
				v1.push_back(s1[i + 1]);
			}
		}
		v2.push_back(a1[0]);
		for(int i = 0; i < a1.length(); i++)
		{
			if(a1[i] == ' ')
			{
				v2.push_back(a1[i + 1]);
			}
		}
		if(v1.size() < v2.size())
		{
			for(int i = 0; i < v1.size(); i++)
			{
				if(v1[i] != v2[i])
				{
					flag = false;
					break;
				}
			}
		}
		else
		if(v1.size() > v2.size())
		{
			for(int i = 0; i < v2.size(); i++)
			{
				if(v1[i] != v2[i])
				{
					flag = false;
					break;
				}
			}
		}
		else
		{
			for(int i = 0; i < v1.size(); i++)
			{
				if(v1[i] != v2[i])
				{
					flag = false;
					break;
				}
			}
		}
		if(flag)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
