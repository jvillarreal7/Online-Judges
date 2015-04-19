#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,hr;
	float aph,s;
	cin>>n>>hr>>aph;
	s=aph*hr;
	cout<<"NUMBER = "<<n<<endl;
	printf("SALARY = U$ %.2f\n",s);
	return 0;
}
