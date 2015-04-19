#include <iostream>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	if(a=="vertebrado")
	{
		if(b=="ave")
		{
			if(c=="carnivoro")
				cout<<"aguia"<<endl;
			else
			if(c=="onivoro")
				cout<<"pomba"<<endl;
			else return 0;
		}
		else
		if(b=="mamifero")
		{
			if(c=="onivoro")
				cout<<"homem"<<endl;
			else
			if(c=="herbivoro")
				cout<<"vaca"<<endl;
			else return 0;
		}
		else return 0;
	}
	else
	if(a=="invertebrado")
	{
		if(b=="inseto")
		{
			if(c=="hematofago")
				cout<<"pulga"<<endl;
			else
			if(c=="herbivoro")
				cout<<"lagarta"<<endl;
			else return 0;
		}
		else
		if(b=="anelideo")
		{
			if(c=="hematofago")
				cout<<"sanguessuga"<<endl;
			else
			if(c=="onivoro")
				cout<<"minhoca"<<endl;
			else return 0;
		}
		else return 0;
	}
	else return 0;
	return 0;
}
