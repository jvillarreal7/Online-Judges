#include <iostream>
using namespace std;

int main()
{
	string ins;
	bool flag = false;
	getline(cin,ins);
	for(int i = 0; i < ins.length(); i++)
	{
		if(ins[i] == 'H' || ins[i] == 'Q' || ins[i] == '9')
			flag = true;
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
