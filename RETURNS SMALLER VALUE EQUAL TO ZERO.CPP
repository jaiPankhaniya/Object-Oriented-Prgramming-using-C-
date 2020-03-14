//program to write a function which returns the smaller value which we have to set as '0'......

#include<iostream>

using namespace std;

int zeroSmaller(int *a,int *b)
{
    if(*a<*b)
    {
        *a=0;
    }
    else if(*b<*a)
    {
        *b=0;
    }
}

int main()
{
    int a,b;

    cout<<"Enter Value of a:-";
    cin>>a;
    cout<<"\n Enter Value of b:-";
    cin>>b;

    cout<<"\nBefore calling the function values are......... \n a="<<a<<"\t b="<<b<<"\n";
    zeroSmaller(&a,&b);
    cout<<"after calling the function values are......... \n a="<<a<<"\t b="<<b<<"\n";

    return 0;
}
