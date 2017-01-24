#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> label1;
	vector<int> label2;
	for(int i = 0; i < 5; i++)
	{
		int aux;
		cin>>aux;
		label1.push_back(aux);
	}
	for(int i = 0; i < 5; i++)
	{
		int aux;
		cin>>aux;
		label2.push_back(aux);
	}
	bool compatible = true;
	for(int i = 0; i < label1.size(); i++)
	{
		if(label1[i] == label2[i])
		{
			compatible = false;
			break;
		}
	}
	if(compatible)
	{
		cout<<'Y'<<'\n';
	}
	else
	{
		cout<<'N'<<'\n';
	}
	return 0;
}
