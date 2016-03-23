#include <iostream>
#include <map>
using namespace std;

int main() 
{
	map<char,int> m;
	m['0'] = 6;
	m['1'] = 2;
	m['2'] = 5;
	m['3'] = 5;
	m['4'] = 4;
	m['5'] = 5;
	m['6'] = 6;
	m['7'] = 3;
	m['8'] = 7;
	m['9'] = 6;
	int t;
	cin>>t;
	while(t--)
	{
		string aux;
		int total = 0;
		cin>>aux;
		for(int i = 0; i < aux.length(); i++)
		{
			total += m[aux[i]];
		}
		cout<<total<<" leds"<<endl;
	}
	return 0;
}
