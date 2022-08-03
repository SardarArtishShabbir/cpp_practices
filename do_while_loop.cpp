#include<iostream>
using namespace std;
int main()
{   
    char ch;
	int t;
	do
	{
		cout<<"Enter Table value ";
		cin>>t;
		for(int a =1;a<=10;a++)
		 cout<<t<<" x "<<a<<" = "<<t*a<<endl;	 
	}
	while(ch=='Y'|| ch=='y');


}
