#include<iostream>
using namespace std;
int main()
{
	int a = 15;
	while(a<1 || a>10)
	{
		cout<<"Enter a value (1-10) ";
		cin>>a;
	}
	cout<<"Value entered is between 1-10 ";

}
