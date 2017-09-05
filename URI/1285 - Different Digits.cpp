#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m;
	while(cin>>n>>m)
	{
		int c = 0;
		for(int i = n; i <= m; i++)
		{
			string num = to_string(i);
			//cout<<num[0]<<endl;
			map<char,int> num_set;
			for(int j = 0; j < num.length(); j++)
			{
				char aux = num[j];
				//cout<<aux<<endl;
				num_set[aux];
			}
			//cout<<num_set.size()<<" "<<num.length()<<endl;
			if(num_set.size() == num.length())
			{
				c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
