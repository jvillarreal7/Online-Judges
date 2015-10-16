#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int q = 0; q < n; q++)
	{
		int a[9][9]={};
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
			{
				cin>>a[i][j];
			}
		}
		bool flag = true;
		int s = 0;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 3; i < 6; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 6; i < 9; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 3; j < 6; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 3; i < 6; i++)
		{
			for(int j = 3; j < 6; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 6; i < 9; i++)
		{
			for(int j = 3; j < 6; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 6; j < 9; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 3; i < 6; i++)
		{
			for(int j = 6; j < 9; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		for(int i = 6; i < 9; i++)
		{
			for(int j = 6; j < 9; j++)
			{
				s+=a[i][j];
			}
		}
		if(s == 45)
		{
			s = 0;
		}
		else
			flag = false;
		
		if(flag == true)
		{
			int row[9]={};
			int col[9]={};	
			for(int i = 0; i < 9; i++)
			{
    			for(int j = 0; j < 9; j++)
    			{
        			col[i]+=a[i][j];
        			row[j]+=a[i][j];
    			}
    		}
    		for(int i = 0; i < 9; i++)
    		{
    			if(col[i] != 45 || row[i] != 45)
    				flag = false;
			}
			if(flag == true)
			{
				cout<<"Instancia "<<q+1<<endl<<"SIM"<<endl<<endl;
			}
			else
				cout<<"Instancia "<<q+1<<endl<<"NAO"<<endl<<endl;
		}
		else
			cout<<"Instancia "<<q+1<<endl<<"NAO"<<endl<<endl;
	}
	return 0;
}
