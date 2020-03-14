//Program for the AVG ,MINIMUM,MAXIMUM

#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	int AVG;
	clrscr();

	cout<<"Enter the value for a:-";
	cin>>a;
	cout<<"\n"<<"Enter the value for b:-";
	cin>>b;
	cout<<"\n"<<" Enter the value for c:-";
	cin>>c;

	AVG=(a+b+c)/3;

	cout<<"\n"<<"The average of the given number is:-"<<AVG;

	if(a>b)
	{
		if(a>c)
		{
			cout<<"\n"<<"The Maximum Value is:-"<<a;
		}
	}

	if(b>a)
	{
		if(b>c)
		{
			cout<<"\n"<<"The Maximum Value is:-"<<b;
		}
	}

	if(c>a)
	{
		if(c>b)
		{
			cout<<"\n "<<"The Maximum Value is:-"<<c;
		}
	}


	if(a<b)
	{
		if(a<c)
		{
			cout<<"\n"<<"The Minimum Value is:-"<<a;
		}
	}

	if(b<a)
	{
		if(b<c)
		{
			cout<<"\n"<<"The Minimum Value is:-"<<b;
		}
	}

	if(c<a)
	{
		if(c<b)
		{
			cout<<"\n"<<"The Minimum Value is:-"<<c;
		}
	}

	getch();
}

