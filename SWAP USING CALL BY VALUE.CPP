//program to swap the two values using the call by value.........
#include<iostream>

using namespace std;

int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a,b;
}
int main()
{
    int x,y;
    cout<<"\t\t"<<"Call By Value........"<<"\n\n";
    cout<<"Enter value for x:-";
    cin>>x;
    cout<<"\n"<<"Enter value for y:-";
    cin>>y;

    cout<<"\n"<<"Before swapping values \n X="<<x<<"\tY="<<y<<"\n";
    swap(x,y);
    cout<<"\n"<<"After swapping Values \n X="<<x<<"\tY="<<y<<"\n";
    return 0;
}
