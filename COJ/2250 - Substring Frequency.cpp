#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <locale>
#include <algorithm>
#include <map>
using namespace std;

int Count( const string & str, 
           const string & obj ) {
    int n = 0;
    string ::size_type pos = 0;
    while( (pos = obj.find( str, pos )) 
                 != std::string::npos ) {
    	n++;
    	//pos += str.size(); case 4 won't appear correctly with this
    	++pos;
    }
    return n;
}

int main()
{
	int t;
	string a,b;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		cin>>a>>b;
		int n = Count(b,a);
		cout<<"Case "<<i+1<<": "<<n<<endl;
	}
	return 0;
}
