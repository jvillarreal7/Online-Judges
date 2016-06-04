#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<string> v;
	string temp;
	while(getline(cin,temp))
	{
		size_t find_start = temp.find("#@");
		if(find_start != string::npos)
		{
			int start_index, finish_index;
			bool start_flag = false;
			for(int i = 0; i < temp.length(); i++)
			{
				if(temp[i] == '#' && temp[i+1] == '@' && start_flag == false)
				{
					start_index = i;
					start_flag = true;
				}
				else
				if(temp[i] == '@' && temp[i+1] == '#')
				{
					finish_index = i+1;
				}
			}
			//cout<<"Start index: "<<start_index<<' '<<"Finish index: "<<finish_index<<endl;
			temp.erase(start_index, finish_index - start_index + 1);
		}
		v.push_back(temp);
	}
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<'\n';
	}
	return 0;
}
