#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++)
	{
		int n;
		int min_speed = 0;
		cin>>n;
		while(n--)
		{
			int aux;
			cin>>aux;
			if(aux > min_speed)
			{
				min_speed = aux;
			}
		}
		cout<<"Case "<<i<<": "<<min_speed<<endl;
	}
	return 0;
}
