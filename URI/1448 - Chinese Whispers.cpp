#include <iostream>
using namespace std;

int main()
{
	int t;
	string s;
	cin>>t;
	getline(cin,s);
	for(int i = 0; i < t; i++)
	{
		string t1, t2;
		//Both counters are initialized and we get all 3 strings.
		int c1 = 0, c2 = 0;
		getline(cin,s);
		getline(cin,t1);
		getline(cin,t2);
		for(int j = 0; j < s.length(); j++)
		{
			//The cycle compares each team's string to the original, character by character.
			//If they're BOTH the same the counter is triggered.
			if(s[j] == t1[j])
			{
				c1++;
			}
			if(s[j] == t2[j])
			{
				c2++;
			}
		}
		//If both counters end up being different there's a winner.
		if(c1 != c2)
		{
			if(c1 > c2)
			{
				cout<<"Instancia "<<i + 1<<endl;
				cout<<"time 1"<<endl;
			}
			else
			{
				cout<<"Instancia "<<i + 1<<endl;
				cout<<"time 2"<<endl;
			}
		}
		//Else, the loser will be the one who makes a mistake first, draws are a possibility too.
		else
		{
			bool flag1 = true, flag2 = true;
			for(int j = 0; j < s.length(); j++)
			{
				if(s[j] != t1[j] && s[j] == t2[j])
				{
					flag1 = false;
					break;
				}
				else
				if(s[j] != t2[j] && s[j] == t1[j])
				{
					flag2 = false;
					break;
				}
			}
			//If both flags remain the same after this, a draw is determined.
			if(flag1 == flag2)
			{
				cout<<"Instancia "<<i + 1<<endl;
				cout<<"empate"<<endl;
			}
			else
			//Else, the false flag will determine the loser (the winner is printed).
			if(flag1 == false)
			{
				cout<<"Instancia "<<i + 1<<endl;
				cout<<"time 2"<<endl;
			}
			else
			if(flag2 == false)
			{
				cout<<"Instancia "<<i + 1<<endl;
				cout<<"time 1"<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
