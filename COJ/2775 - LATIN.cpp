#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool s_Vowel(string s)
{
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
	{
		return true;
	}
	else
		return false;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		if(s_Vowel(n))
		{
			n += "cow";
		}
		else
		{
			char temp = n[0];
			n.erase(0,1);
			n += temp;
			n += "ow";
		}
		cout<<n<<endl;
	}
	return 0;
}
