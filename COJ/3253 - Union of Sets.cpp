//TLE'd using cin/cout, use scanf/printf instead.
 
#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
 
int main()
{
	int t;
	scanf("%d",&t);
	set<int> s;
	while(t--)
	{
		int e;
		scanf("%d",&e);
		while(e--)
		{
			int aux;
			scanf("%d",&aux);
			s.insert(aux);
		}
	}
	printf("%d\n", s.size());
	return 0;
}

