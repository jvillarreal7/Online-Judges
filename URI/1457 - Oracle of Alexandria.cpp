#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

long long int getFactorial(long long int number, long long int e) {
	long long int temp;

	if(number <= 1) return 1;

	temp = (number * getFactorial(number - e, e));
	return temp;
}
int main()
{
	int t;
	string n;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,n);
		size_t f = n.find('!');
		string a = n.substr(0,f);
		string b = n.substr(f);
		long long int n1 = atoi(a.c_str());
		long long int e = count(b.begin(),b.end(),'!');
		//long long int r = 0;
		cout<<getFactorial(n1,e)<<endl;
	}
	return 0;
}
