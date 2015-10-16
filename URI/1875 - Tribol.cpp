#include <iostream>
#include <map>
using namespace std;

int getGoals(char a, char b)
{
	if(a == 'R' && b == 'G')
	{
		return 2;
	}
	else
	if(a == 'R' && b == 'B')
	{
		return 1;
	}
	else
	if(a == 'G' && b == 'B')
	{
		return 2;
	}
	else
	if(a == 'G' && b == 'R')
	{
		return 1;
	}
	else
	if(a == 'B' && b == 'G')
	{
		return 1;
	}
	else
	if(a == 'B' && b == 'R')
	{
		return 2;
	}
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<char,int> m;
		while(n--)
		{
			char scoreTeam,defTeam;
			cin>>scoreTeam>>defTeam;
			m[scoreTeam]+=getGoals(scoreTeam,defTeam);
			//cout<<"Red: "<<m['R']<<endl;
			//cout<<"Green: "<<m['G']<<endl;
			//cout<<"Blue: "<<m['B']<<endl;
		}
		if(m['R'] > m['G'] && m['R'] > m['B'])
		{
			cout<<"red"<<endl;
		}
		else
		if(m['B'] > m['G'] && m['B'] > m['R'])
		{
			cout<<"blue"<<endl;
		}
		else
		if(m['G'] > m['R'] && m['G'] > m['B'])
		{
			cout<<"green"<<endl;
		}
		else
		if((m['R'] == m['G']) && (m['R'] == m['B']) && (m['B'] == m['G']) && (m['B'] == m['R']) && (m['G'] == m['R']) && (m['G'] == m['B']))
		{
			cout<<"trempate"<<endl;
		}
		else
		if(m['R'] == m['G'] && m['R'] > m['B'] && m['G'] > m['B'])
			cout<<"empate"<<endl;
		else
		if(m['G'] == m['B'] && m['G'] > m['R'] && m['B'] > m['R'])
			cout<<"empate"<<endl;
		else
		if(m['B'] == m['R'] && m['B'] > m['G'] && m['R'] > m['G'])
			cout<<"empate"<<endl;
	}
	return 0;
}
