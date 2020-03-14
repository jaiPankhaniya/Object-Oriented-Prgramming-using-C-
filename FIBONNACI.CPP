//Program to print the fibonnaci series of first n number.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a=0,b=1,c,num,i;

	cout<<"Enter the Total number .....";
	cin>>num;

	cout<<"\n"<<"start from here........." ;
	cout<<"\n"<<a;
	cout<<"\n"<<b;

	for(i=0;i<num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<"\n"<<c;
	}
	cout<<"\nThankyou....." ;

	return 0;

}
