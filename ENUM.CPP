//program to find the area of circle ,triangle and rectangle using enum datatype.........

#include<iostream>
#include<conio.h>

enum shape{circle=1,rectangle,triangle};

using namespace std;

int main()
{
	int ch;
	
	label:
	cout<<"Enter Your Choice..\n";

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Press 1 for Circle\n";
	cout<<"Press 2 for Rectangle\n";
	cout<<"Press 3 for Triangle\n";
	cout<<"=========================================\n";

	cout<<"Your choice is:";
	cin>>ch;

	cout<<"\n________________________________________";

	switch(ch)
	{
		case circle :
			int r;
			cout<<"\nEnter R : ";
			cin>>r;
			cout<<"\nArea of Circle is : "<<3.14*r*r;
			break;

		case rectangle :
			int l,b;
			cout<<"\n\nEnter L of Rectangle : ";
			cin>>l;
			cout<<"\nEnter B of Rectangle : ";
			cin>>b;
			cout<<"\nArea of Rectangle is : "<<l*b;
			break;

		case triangle :
			int base,h;
			cout<<"\n\nEnter B of Triangle : ";
			cin>>base;
			cout<<"\nEnter H of Triangle : ";
			cin>>h;
			cout<<"\nArea of Triangle is : "<<0.5*base*h;
			break;
		default :

		cout<<"Invalid Choice...!";

		goto label;
	}
	return 0;
}
