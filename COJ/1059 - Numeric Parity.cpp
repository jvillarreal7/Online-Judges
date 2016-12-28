#include <iostream>
#include <bitset>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	while(cin>>n)
	{
		if(n == 0)
			break;
		string binary = bitset<32>(n).to_string();
		int c = 0;
		for(int i = 0; i < binary.length(); i++)
		{
			if(binary[i] == '1')
				c++;
		}
		//This erases leading zeros.
		binary.erase(0, min(binary.find_first_not_of('0'), binary.size()-1));

		cout<<"The parity of "<<binary<<" is "<<c<<" (mod 2)."<<'\n';
	}
	return 0;
}
