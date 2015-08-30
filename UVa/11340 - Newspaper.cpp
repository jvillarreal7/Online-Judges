#include <iostream>
#include <map>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
	int n,k,val,m;
	string line;
	long long s=0;
	unsigned char a;
	//cout<<fixed<<setprecision(2);
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	while(n--)
	{
		std::map<unsigned char,int> first;
		cin>>k;
		while(k--)
		{
			cin>>a>>val;
			first[a]=val;
		}
		cin>>m;
		getline(cin,line);
		while(m--)
		{
			getline(cin,line);
			for(int i=0;i<line.length();i++)
			{
				s+=first[line[i]];
			}
		}
		printf("%.2lf$\n", s / 100.0);
		s=0;
	}
}
