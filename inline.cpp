//program to find the largest number among three using the inline function.....

#include<iostream>

using namespace std;

inline void largest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"Largest value is a";
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            cout<<"Largest value is b";
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            cout<<"Largest Value is C";
        }
    }
}

int main()
{
    int a,c,b;
    cout<<"Enter the Value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;

    largest(a,b,c);
    return 0;
}
