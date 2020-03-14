// program to perform the bubble sort using the array

#include<iostream>
using namespace std;

int main()
{
    int a[100],i,j,n,temp;

    cout<<"enter total number of element :-";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Before sort:-";

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting:-";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
