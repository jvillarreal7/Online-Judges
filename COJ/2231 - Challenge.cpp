#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t, score1 = 0, score2 = 0;
	cin>>t;
	while(t--)
	{
		string move1, move2;
		cin>>move1>>move2;
		if(move1 == "rock")
		{
			if(move2 == "paper")
				score2++;
			else
			if(move2 == "scissors")
				score1++;
		}
		if(move1 == "paper")
		{
			if(move2 == "scissors")
				score2++;
			else
			if(move2 == "rock")
				score1++;
		}
		if(move1 == "scissors")
		{
			if(move2 == "rock")
				score2++;
			else
			if(move2 == "paper")
				score1++;
		}
	}
	if(score1 > score2)
	{
		cout<<"A win"<<'\n';
	}
	else
	if(score1 < score2)
	{
		cout<<"B win"<<'\n';
	}
	else
	{
		cout<<"tied"<<'\n';
	}
	return 0;
}
