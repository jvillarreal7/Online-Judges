#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n == 0)
			break;
		int totalTime = 0;
		int AC = 0;
		map<char,int> t;
		map<char,int> dis;
		while(n--)
		{
			char c;
			int tp;
			string j;
			cin>>c>>tp>>j;
			if(j == "incorrect")
			{
				t[c] += 20;
			}
			else
			{
				totalTime += t[c] + tp;
				if(dis[c] == 0)
				{
					dis[c] = 1;
					AC++;
				}
			}
		}
		cout<<AC<<" "<<totalTime<<endl;
	}
	return 0;
}
