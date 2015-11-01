#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		int shift;
		vector<char> v;
		getline(cin,s);
		getline(cin,s);
		cin>>shift;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] - shift < 65)
			{
				int dif = 65 - s[i];
				int temp = shift + dif - 1;
				v.push_back('Z' - temp);
			}
			else
				v.push_back(s[i] - shift);
		}
		for(int i = 0; i < v.size(); i++)
		{
			cout<<v.at(i);
		}
		cout<<endl;
	}
	return 0;
}