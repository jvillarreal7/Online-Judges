//This problem won't be judged using numbers with more than 1 digit. Char vectors for both sets will suffice.
//"ph" just holds the first word for each set input. Oddily, this word seems to vary during judgement too.
//So implementing a substring algorithm with fixed positions to extract all the data ended up being a huge waste of time lol.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <set>
#include <cstdio>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<char> set1;
	vector<char> set2;
	string setName1,setName2,ph,a;
	int s1,s2;
	
	cin>>ph>>setName1>>s1;
	
	for(int i = 0; i < s1; i++)
	{
		char x;
		cin>>x;
		set1.push_back(x);
	}

	getline(cin,ph);
	cin>>ph>>setName2>>s2;

	for(int i = 0; i < s2; i++)
	{
		char x;
		cin>>x;
		set2.push_back(x);
	}

	sort(set1.begin(), set1.end());
	sort(set2.begin(), set2.end());
	
	vector<char> t; //Temporal vector holding all the resulting sets. Can be done with actual sets too.

	set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(t));
	cout<<setName1<<" U "<<setName2<<": {";
	for(int i = 0; i < t.size(); i++)
	{
		cout<<t.at(i);
		if(i != t.size()-1)
		{
			cout<<",";
		}
	}
	cout<<"}"<<'\n';
	t.clear(); //Wipes temporal vector so it can be used again.

	set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(t));
	cout<<setName1<<" I "<<setName2<<": {";
	for(int i = 0; i < t.size(); i++)
	{
		cout<<t.at(i);
		if(i != t.size()-1)
		{
			cout<<",";
		}
	}
	cout<<"}"<<'\n';
	t.clear();

	set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(t));
	cout<<setName1<<" D "<<setName2<<": {";
	for(int i = 0; i < t.size(); i++)
	{
		cout<<t.at(i);
		if(i != t.size()-1)
		{
			cout<<",";
		}
	}
	cout<<"}"<<'\n';
	t.clear();

	set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), back_inserter(t));
	cout<<setName2<<" D "<<setName1<<": {";
	for(int i = 0; i < t.size(); i++)
	{
		cout<<t.at(i);
		if(i != t.size()-1)
		{
			cout<<",";
		}
	}
	cout<<"}"<<'\n';

	return 0;
}
