#include <iostream>
using namespace std;

int main()
{
	string players;
	getline(cin,players);
	bool flag = false;
	int c = 0;
	for(int i = 0; i < players.size(); i++)
	{
		if(i == 0)
		{
			c++;
		}
		else
		if(players[i] == players[i-1])
		{
			c++;
			if(c > 6)
				flag = true;
		}
		else
			c = 1;
	}
	if(flag)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
}
