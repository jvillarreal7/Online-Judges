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
	int n;
	string s,part1,part2,rev;
	cin>>s;
	n = s.length();
	if(n%2==0)
	{
		part1 = s.substr (0,n/2);
		reverse(part1.begin(), part1.end());
		
		part2 = s.substr(n/2,n);
		reverse(part2.begin(), part2.end());
	}
	else
	{
		part1 = s.substr (0,n/2);
		reverse(part1.begin(), part1.end());
		
		part2 = s.substr(n/2,n);
		reverse(part2.begin()+1, part2.end());	
	}
	rev=part1+part2;
	cout<<rev<<endl;
}
