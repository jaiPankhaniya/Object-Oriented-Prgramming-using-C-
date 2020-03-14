// method to define the object of the class

#include<iostream>

using namespace std;

class H
{
    public:
        char name[];
        void gvalue();
        void putvalue();
}h;

void H :: gvalue()
{
    cout<<"Enter name";
    cin>>h.name;
}

void H :: putvalue()
{
    cout<<h.name;
}

int main()
{
    h.gvalue();
    h.putvalue();
    return 0;
}
