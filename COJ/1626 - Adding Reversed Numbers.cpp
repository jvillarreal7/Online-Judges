#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, first, second;
	cin>>n;
	while(n--)
	{
		//Get the first two numbers for each case. Convert to string (C++11 and up only).
		cin>>first>>second;
		string st_fn = to_string(first);
		string st_sn = to_string(second);

		//Reverse both strings.
		reverse(st_fn.begin(), st_fn.end());
		reverse(st_sn.begin(), st_sn.end());

		//Check for leading zeros, delete them. (Not actually sure if needed but, eh.)
		st_fn.erase(0, min(st_fn.find_first_not_of('0'), st_fn.size()-1));
		st_sn.erase(0, min(st_sn.find_first_not_of('0'), st_sn.size()-1));

		//Convert both numbers to integer and add them up.
		int reversed_f = stoi(st_fn);
		int reversed_s = stoi(st_sn);
		int r = reversed_f + reversed_s;

		//Convert the added number to string.
		string r_add = to_string(r);

		//Reverse, check for leading zeros again and delete them.
		reverse(r_add.begin(), r_add.end());
		r_add.erase(0, min(r_add.find_first_not_of('0'), r_add.size()-1));

		//Print result.
		cout<<r_add<<'\n';
	}
	return 0;
}
