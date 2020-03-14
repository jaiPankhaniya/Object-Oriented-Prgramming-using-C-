// program to find the value of the Temp and printing the followin the messages....
#include<iostream.h>
#include<conio.h>

void main()
{
	int temp;
	clrscr();

	cout<<"Enter the Value of the Temp:-";
	cin>>temp;

	if(temp<0)
	{
		cout<<"\n"<<"it is 'ICE'";
	}
	else if(temp>100)
	{
		cout<<"\n"<<"it is 'STEAM'";
	}
	else
	{
		cout<<"\n"<<"it is 'WATER'";
	}
	getch();
}