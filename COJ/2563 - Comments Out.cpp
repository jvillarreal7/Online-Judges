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
		//Find if an opener exists so you can skip non-commented lines right away.
		size_t find_start = temp.find("#@");
		if(find_start != string::npos)
		{
			int start_index, finish_index;
			bool start_flag = false;
			for(int i = 0; i < temp.length(); i++)
			{
				//Get the opener's index and pop the flag.
				if(temp[i] == '#' && temp[i+1] == '@' && start_flag == false)
				{
					start_index = i;
					start_flag = true;
				}
				else
				if(temp[i] == '@' && temp[i+1] == '#')
				{
					//You'll get the last finisher this way.
					finish_index = i+1;
				}
			}
			//Debug line:
			//cout<<"Start index: "<<start_index<<' '<<"Finish index: "<<finish_index<<endl;
			//Erase characters starting from the opener's index to where the finisher ends.
			//Note that the second parameter is NOT an index but the number of characters it should erase.
			temp.erase(start_index, finish_index - start_index + 1);
		}
		//Store the processed strings inside a vector.
		v.push_back(temp);
	}
	//Iterate and print vector.
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<'\n';
	}
	return 0;
}
