// program for the addition of the matrix

#include<iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],s[10][10],r,c;

    cout<<"Enter total number of rows......";
    cin>>r;
    cout<<"Enter total number of columns....";
    cin>>c;

    cout<<"Enter the First Matrix"<<"\n";

    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the Second Matrix"<<"\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"The Resultant Matrix is........ "<<"\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<s[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
