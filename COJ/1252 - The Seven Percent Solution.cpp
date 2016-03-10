#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	char s;
	s = getchar();
	//Using getline here = either WA or TLE. <sigh>
	while(s != '#')
	{
		if(s == ' ')
		{
			cout<<"%20";
		}
		else
		if(s == '!')
		{
			cout<<"%21";
		}
		else
		if(s == '$')
		{
			cout<<"%24";
		}
		else
		if(s == '%')
		{
			cout<<"%25";
		}
		else
		if(s == '(')
		{
			cout<<"%28";
		}
		else
		if(s == ')')
		{
			cout<<"%29";
		}
		else
		if(s == '*')
		{
			cout<<"%2a";
		}
		else
		{
			cout<<s;
		}
		s = getchar();
	}
	return 0;
}
