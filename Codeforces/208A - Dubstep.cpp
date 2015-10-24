#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s,r,wub = "WUB";
	vector<int> v;
	getline(cin,s);
	int q = s.length();
	for(int i = 0; i < q; i++)
	{
		size_t pos = s.find(wub);
		if(pos != string::npos)
		{
			if(pos != 0 || pos == string::npos)
			{
				s.replace(s.find(wub), wub.length(), " ");
			}
			else
				s.replace(s.find(wub), wub.length(), "");
		}
	}
	q = s.length();
	for(int i = 0; i < q; i++)
	{
		int a = s.length();
		if(s[i] == ' ' && s[i+1] == ' ')
		{
			s.replace(i, 1, "");
		}
	}	
	cout<<s<<endl;
	return 0;
}
