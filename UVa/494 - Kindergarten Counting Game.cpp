#include <iostream>
using namespace std;
int count_words(string a)
{
	int num=1;
	for(int i=0;i<a.length();i++)
		//if((a[i]<'a'&&a[i]>'z')||(a[i]<'A'&&a[i]>'Z'))&&((a[i+1]>='a'&&a[i+1]<='z')||(a[i+1]>='A'&&a[i+1]<='Z'))
		if((a[i]<'a'&&a[i]>'z')||(a[i]<'A'&&a[i]>'Z')&&(a[i+1]>='a'&&a[i+1]<='z')||(a[i+1]>='A'&&a[i+1]<='Z'))
			num++;
		return num;
}
int main()
{
	string a;
	cin.ignore();
	while(getline(cin,a))
	{
		cout<<count_words(a)<<endl;
	}
}
