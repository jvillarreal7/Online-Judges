#include <iostream>
#include <stack>
using namespace std;

int getPrecedence(char a)
{
	if(a == '^')
		return 4;
	if(a == '*')
		return 3;
	if(a == '/')
		return 3;
	if(a == '+')
		return 2;
	if(a == '-')
		return 2;
}
bool isOperator(char b)
{
	if(b == '^' || b == '*' || b == '/' || b == '+' || b == '-')
		return true;
	else
		return false;
}
bool getAssociation(char c)
{
	if(c == '^')
		return false;
	else 
		true;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a,output;
		stack<char> op;
		getline(cin,a);
		for(int i = 0; i < a.length(); i++)
		{
			if((a[i] >= 'a') && (a[i] <= 'z'))
				output+=a[i];
			else
			if(isOperator(a[i]) && isOperator(op.top()))
			{
				if(!getAssociation(a[i]))
				{
					while(getPrecedence(a[i]) <= (getPrecedence(op.top())))
					{
						output+=op.top();
						op.pop();
					}
					op.push(a[i]);
				}
				else
				{
					while(getPrecedence(a[i]) < (getPrecedence(op.top())))
					{
						output+=op.top();
						op.pop();
					}
					op.push(a[i]);	
				}		
			}
			else
			if(isOperator(a[i]))
				op.push(a[i]);
			if(a[i] == '(')
				op.push(a[i]);
			else
			if(a[i] == ')')
			{
				while(op.top() != '(')
				{
					output+=op.top();
					op.pop();	
				}
				op.pop();
			}
		}
		while(!op.empty())
		{
			output+=op.top();
			op.pop();
		}
		cout<<output<<endl;			
	}
	return 0;
}
