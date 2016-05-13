#include <iostream>
using namespace std;

int main() 
{
	int h, w;
	bool flag = false;
	double area = 0.0;
	string s;
	cin>>h>>w;
	getline(cin,s);
	for(int i = 0; i < h; i++)
	{
		getline(cin,s);
		for(int j = 0; j < w; j++)
		{
			if(s[j] == 47 || s[j] == 92)
			{
				area += 0.5;
				flag = !flag;
			}
			else
			if(s[j] == 46 && flag == true)
			{
				area += 1.0;
			}
		}
	}
	//cout<<s<<endl;
	//Initially forgot to cast it to int in a rushed submission, got AC anyway lol.
	cout<<area<<endl;
	return 0;
}
