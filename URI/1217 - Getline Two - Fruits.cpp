#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<fixed<<setprecision(2);
	int t, kg_counter = 0, totalkg = 0;
	double totalp = 0.0;
	cin>>t;
	for(int i = 1; i <= t; i++)
	{
		double k;
		cin>>k;
		totalp += k;
		string f;
		getline(cin,f);
		getline(cin,f);
		int space_counter = 0;
		for(int j = 0; j < f.length(); j++)
		{
			if(f[j] == ' ')
			{
				space_counter++;
			}
		}
		if(space_counter == 0)
		{
			kg_counter = 1;
		}
		else
		{
			kg_counter = space_counter + 1;
		}
		totalkg += kg_counter;
		cout<<"day "<<i<<": "<<kg_counter<<" kg"<<endl;
	}
	cout<<(double)totalkg / (double)t<<" kg by day"<<endl;
	cout<<"R$ "<<totalp / (double)t<<" by day"<<endl;
	return 0;
}
