#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n == 0)
			break;
		queue<int> q;
		vector<int> temp;
		vector<int> v;
		while(n >= 1)
		{
			temp.push_back(n);
			n--;
		}
		reverse(temp.begin(), temp.end());
		for(int i = 0; i < temp.size(); i++)
		{
			q.push(temp[i]);
		}
		while(q.size() >= 2)
		{
			v.push_back(q.front());
			q.pop();
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout<<"Discarded cards: ";
		for(int i = 0; i < v.size(); i++)
		{
			cout<<v[i];
			if(i != v.size() - 1)
			{
				cout<<", ";
			}
		}
		cout<<endl;
		cout<<"Remaining card: "<<q.front()<<endl;;
	}
	return 0;
}
