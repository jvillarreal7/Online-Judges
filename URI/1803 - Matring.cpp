#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
	//A char array able to hold the matrix is created.
	char a[4][85] = {};
	//Careful with the constraints!
	string aux;
	int k = 0;
	for(int i = 0; i < 4; i++)
	{
		//The matrix from the input is read line by line.
		cin>>aux;
		for(int j = 0; j < aux.length(); j++)
		{
			//Char array is filled character by character.
			a[i][j] = aux[j];
		}
	}
	//Two empty strings are created to concatenate each of the values from the 1st and last columns.
	string first = "";
	string last = "";
	for(int i = 0; i < 4; i++)
	{
		string x;
		x = a[i][0];
		first += x;
		//The aux string's length will give us the location of the last column.
		x = a[i][aux.length() - 1];
		last += x;
	}
	int f = atoi(first.c_str());
	int l = atoi(last.c_str());
	//First and last column values are now integers.
	string col = "";
	//Similar procedure to turn each of the remaining columns into integers.
	for(int i = 1; i < aux.length() - 1; i++)
	{
		k = 0;
		while(k < 4)
		{
			col += a[k][i];
			k++;
		}
		int m = atoi(col.c_str());
		//We can now calculate the ASCII id of each column.
		unsigned long long int id = (f * m + l) % 257;
		//The id is casted into char and printed.
		cout<<(char)id;
		col = "";
	}
	cout<<endl;
	return 0;
}
