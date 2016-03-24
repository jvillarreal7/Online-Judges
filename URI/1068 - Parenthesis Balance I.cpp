#include <iostream>
#include <stack>
using namespace std;

int main() 
{
	string op;
	while(cin>>op)
	{
		stack<char> l;
		stack<char> r;
		for(int i = 0; i < op.length(); i++)
		{
			if(op[i] == '(')
			{
				l.push('(');
			}
			if(op[i] == ')')
			{
				r.push(')');
				if(!l.empty() && l.top() == '(')
				{
					l.pop();
					r.pop();
				}
			}
		}
		if(l.empty() && r.empty())
		{
			cout<<"correct"<<endl;
		}
		else
		{
			cout<<"incorrect"<<endl;
		}
	}
	return 0;
}
