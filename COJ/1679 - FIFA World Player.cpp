#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t, h_index;
	double max_f = 0.0;
	cin>>t;
	vector<double> factors;
	vector<string> players;
	for(int i = 0; i < t; i++)
	{
		string name;
		int PA, PJ, G, A, TA, TR;
		cin>>name>>PA>>PJ>>G>>A>>TA>>TR;
		double c_factor = log10(PA) + PJ + 2*G + A - (TA + 2*TR);
		players.push_back(name);
		if(max_f < c_factor)
		{
			max_f = c_factor;
			h_index = i;
		}
	}
	cout<<players[h_index]<<'\n';
	return 0;
}
