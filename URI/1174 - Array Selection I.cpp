#include <iostream>
using namespace std;
int main()
{
	float A[100]={11},x[100]={11};
	int j[100]={};
	std::fill(A, A + 100, 11);
	std::fill(x, x + 100, 11);
	for(int i=0;i<100;i++)
	{
		cin>>A[i];
		if(A[i]<=10)
		{
			j[i]=i;
			x[i]=A[i];
		}
	}
	for(int i=0;i<100;i++)
	{
		if(x[i]<=10)
		cout<<"A["<<j[i]<<"] ="<<" "<<x[i]<<endl;
	}
	return 0;
}
