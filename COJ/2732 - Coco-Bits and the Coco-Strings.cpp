#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <locale>
#include <algorithm>
using namespace std;

char change_case (char c) {
    if (std::isupper(c)) 
        return std::tolower(c); 
    else
        return std::toupper(c); 
}

int main()
{
	int t;
	string coco;
	cin>>t;
	while(t--)
	{
		cin>>coco;
		transform(coco.begin(), coco.end(), coco.begin(), change_case);
		cout<<coco<<endl;
	}
}
