//program to make an calculator
#include<iostream>
#include<conio.h>
 using namespace std;

 int main()
{
	int choice,a,b;

	cout<<"Enter the index value from the following which u want"<<"\n"<<"1.) Addition"<<"\n"<<"2.) Subtraction"<<"\n"<<"3.) Division"<<"\n"<<"4.) Multiplication";

	cout<<"\n"<<"Enter your Choice:-";
	cin>>choice;

	cout<<"\n"<<"Enter Value for the a:-";
	cin>>a;
	cout<<"\n"<<"Enter Value for the b:-";
	cin>>b;

	switch(choice)
	{
		case 1:
		cout<<"\n "<<"Your Choice is Addition....";
		int sum;
		sum=a+b;
		cout<<"\n"<<"Sum :="<<sum;
		break;

		case 2:
		cout<<"\n"<<"Your Choice is Subtraction....";
		int sub;
		sub=a-b;
		cout<<"\n"<<"Sub:="<<sub;
		break;

		case 3:
		cout<<"\n"<<"Your Choice is Devision....";
		float div;
		div=a/b;
		cout<<"\n"<<"div:="<<div;
		break;

		case 4:
		cout<<"\n"<<"Your Choice is Multiplication....";
		int mul;
		mul=a*b;
		cout<<"Multiplication :="<<mul;
		break;
	}
    return 0;

}
