#include <iostream>
#include <algorithm>
using namespace std;
 
int Count(const string & str, const string & obj) {
    int n = 0;
    string ::size_type pos = 0;
    while( (pos = obj.find( str, pos )) 
                 != std::string::npos ) {
    	n++;
    	++pos;
    }
    return n;
}
 
int main()
{
	int t, n;
	string subs[8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
	cin>>t;
	for(int i = 1; i <= t; i++)
	{
		cin>>n;
		string temp;
		getline(cin,temp);
		getline(cin,temp);
		cout<<i<<' ';
		for(int j = 0; j < 8; j++)
		{
			cout<<Count(subs[j], temp);
			if(j < 7)
				cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
