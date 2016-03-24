#include <iostream>
#include <map>
using namespace std;

int main() 
{
	string m;
	map<char,double> notes;
	notes['W'] = 1.0;
	notes['H'] = 0.5;
	notes['Q'] = 0.25;
	notes['E'] = 0.125;
	notes['S'] = 0.0625;
	notes['T'] = 0.03125;
	notes['X'] = 0.015625;
	while(cin>>m)
	{
		if(m == "*")
			break;
		int slash_c = 0;
		int c_measure = 0;
		double sum = 0.0;
		for(int i = 0; i < m.length(); i++)
		{
			if(m[i] == '/')
			{
				if(slash_c == 0)
				{
					slash_c++;
				}
				else
				{
					//cout<<sum<<endl;
					if(sum == 1.0)
					{
						c_measure++;
					}
					slash_c = 0;
					sum = 0.0;
					i--;
				}
			}
			else
			{
				sum += notes[m[i]];
			}
		}
		cout<<c_measure<<endl;
	}
	return 0;
}
