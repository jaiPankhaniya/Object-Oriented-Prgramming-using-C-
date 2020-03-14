// Program to reverse the given string......

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100],temp[100];
	clrscr();
	cout<<"Enter the String.....";
	cin>>str;

	int i,len=strlen(str);
	int start,end;
	end=len-1;

	for(start=0;start<len;start++)
	{
		temp[start]=str[end];
		end--;
	}
	temp[start]='\0';

	cout<<"\n Reversed String:="<<temp;

	getch();
}