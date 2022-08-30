#include<iostream>
using namespace std;
enum dow {
	mon,tues,wed,thurs,fri,sat,sun
};
int main()
{
	dow d1,d2;
	d1 = mon;
	d2 = thurs;
	int difference = d2-d1;
	cout<<"Day between monday through thursday are "<<difference<<endl;
	if (d1<d2)
	cout<<"Monday comes before thursday";
	}
