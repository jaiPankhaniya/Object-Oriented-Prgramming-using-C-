#include<iostream>
using namespace std;

class Staff
{
    public:
        int code;
        string name;
};

class teacher : Staff
{
    public:
        string sub,pub;
};

class typiest : Staff
{
    public:
        int speed;
};

class officer : Staff
{
    public:
        char grade;
};

class Regular : typiest
{
};

class casual : typiest
{
    public:
        string wages;
};

int main()
{
    Staff s;
    cout<<"Using the object of the staff\n";
    cout<<"Enter the code of the staff:";
    cin>>s.code;

    cout<<"Enter the name of the staff:";
    cin>>s.name;

    cout<<"Name:"<<s.name<<"\t code:"<<s.code;

    cout<<"using the object of teacher class";
    teacher t;

    cout<<"Enter the code of the staff:";
    cin>>t.code;

    cout<<"Enter the name of the staff:";
    cin>>t.name;

    cout<<"Name:"<<t.name<<"\t code:"<<t.code;
    return 0;
}
