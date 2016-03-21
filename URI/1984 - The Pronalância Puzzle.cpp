#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string n;
	cin>>n;
	for(string::reverse_iterator rit = n.rbegin(); rit != n.rend(); ++rit)
    	cout<<*rit;
    cout<<endl;
	return 0;
}
