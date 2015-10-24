#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	cout<<fixed<<setprecision(2);
	vector<int> v;
	string n;
	getline(cin,n);
	int q = n.length();
	for(int i = 0; i < q; i++)
	{
		if(n[i] == '1' && n[i+1] != '0')
		{
			int x = n[i] - '0';
			v.push_back(x);
		}
		else
		if(n[i] == '1' && n[i+1] == '0')
		{
			v.push_back(10);
			i++;
		}
		else
		{
			int x = n[i] - '0';
			v.push_back(x);
		}
	}
	int sum = 0;
	for(int i = 0; i < v.size(); i++)
	{
		sum += (double)v[i];	
	}
	double avg = sum / (double)v.size();
	cout<<avg<<endl;
	return 0;
}
