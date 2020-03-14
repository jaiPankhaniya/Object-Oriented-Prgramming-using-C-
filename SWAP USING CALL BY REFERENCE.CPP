//program to swap the two values using the call by reference........

#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int X,Y;
    cout<<"\t\t\t"<<"Call by Reference.........\n\n";
    cout<<"Enter value of X:-";
    cin>>X;
    cout<<"\n Enter Value of Y:-";
    cin>>Y;

    cout<<"\n\n Before Swap Values of \n X="<<X<<"\t Y="<<Y<<"\n";
    swap(&X,&Y);
    cout<<"\n\n After Swap Values of \n X="<<X<<"\t Y="<<Y<<"\n";
    return 0;
}
