#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n1,n2,n3,n4,md,mdf,ex;
	cin>>n1>>n2>>n3>>n4;
	md=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
	cout<<fixed<<setprecision(1);
	if(md>=7.0)
	{
		cout<<"Media: "<<md<<endl;
		cout<<"Aluno aprovado."<<endl;
	}
	else if(md<5.0)
	{
		cout<<"Media: "<<md<<endl;
		cout<<"Aluno reprovado."<<endl;
	}
	else
	{
		cout<<"Media: "<<md<<endl;
		cout<<"Aluno em exame."<<endl;
		cin>>ex;
		cout<<"Nota do exame: "<<ex<<endl;
		mdf=(md+ex)/2;
		if(mdf>=5.0)
		{
			cout<<"Aluno aprovado."<<endl;
			cout<<"Media final: "<<mdf<<endl;
		}
		else
		{
			cout<<"Aluno reprovado."<<endl;
			cout<<"Media final: "<<mdf<<endl;		
		}
	}
	return 0;
}
