#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	while(cin>>n)
	{
		if(n == 0)
			break;
		int aux;
		aux = (n * n) - (n - 1);
		cout<<n<<" => "<<aux<<'\n';
	}
	return 0;
}
