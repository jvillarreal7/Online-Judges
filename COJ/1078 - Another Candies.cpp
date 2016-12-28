#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t, n;
	cin>>t;
	while(t--)
	{
		int n, sum = 0;
		cin>>n;
		for(int i = 0; i < n; i++)
		{
			int aux;
			cin>>aux;
			sum += aux;
		}
		//cout<<">>"<<sum<<endl;
		if(sum % n == 0)
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<'\n';
	}

	return 0;
}
