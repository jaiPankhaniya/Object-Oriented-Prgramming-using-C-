//Program to accept the String and print the total vowels.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int i=0,A=0,E=0,I=0,O=0,U=0,strl=0;

    cout<<"Enter the String........"<<"\n";
    cin>>str;
    strl=strlen(str);
    for(i=0;i<strl;i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
        {
            if(str[i]=='A' || str[i]=='a')
            {
                A++;
                cout<<str[i]<<"\t";
            }
            else if(str[i]=='E' || str[i]=='e')
            {
                E++;
                cout<<str[i]<<"\t";
            }
            else if(str[i]=='I' || str[i]=='i')
            {
                I++;
                cout<<str[i]<<"\t";
            }
            else if(str[i]=='O' || str[i]=='o')
            {
                O++;
                cout<<str[i]<<"\t";
            }
            else if(str[i]=='U' || str[i]=='u')
            {
                U++;
                cout<<str[i]<<"\t";
            }
        }
    }
    cout<<"\n"<<"Number of occurrences of Vowels is:-"<<"\n";
    cout<<"A or a:-"<<A<<"\n";
    cout<<"E or e:-"<<E<<"\n";
    cout<<"I or i:-"<<I<<"\n";
    cout<<"O or o:-"<<O<<"\n";
    cout<<"U or u:-"<<U<<"\n";

    return 0;
}
