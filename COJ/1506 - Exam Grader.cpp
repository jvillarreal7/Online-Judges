#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout<<fixed<<setprecision(2);
	int n;
	cin>>n;
	string correct_ans;
	getline(cin,correct_ans);
	getline(cin,correct_ans);
	int t;
	cin>>t;
	string ans;
	getline(cin,ans);
	while(t--)
	{
		double sum = 0.0;
		getline(cin,ans);
		for(int i = 0; i < ans.length(); i++)
		{
			if(ans[i] != correct_ans[i])
			{
				if(ans[i] != '#')
				{
					sum -= 0.25;
				}
			}
			else
				sum += 1.00;
		}
		cout<<sum<<endl;
	}
	return 0;
}
