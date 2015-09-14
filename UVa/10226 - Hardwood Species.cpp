#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
	int t,count;
	char tree[31];
	map<string,int> m;
	scanf("%d\n\n",&t);
	while(t--)
	{
		count=0;
		while(gets(tree))
		{
			if(strlen(tree)==0)
				break;
			if(m.count(string(tree)) == 0)
				m[string(tree)] = 1;
			else
				m[string(tree)] += 1;
			count++;
		}
		map<string, int>::iterator a;
		for(a = m.begin(); a != m.end(); a++)
			printf("%s %.4lf\n", (*a).first.data(),
					(double) (*a).second / (double) count * 100.0);
		if(t>0)
		{
			cout<<endl;
			m.clear();
		}
	}
	return 0;
}
