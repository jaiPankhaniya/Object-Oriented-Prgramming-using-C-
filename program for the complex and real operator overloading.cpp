#include<iostream>
using namespace std;

class A
{
    int a,b;

    public:
        A(){};

        A(int i, int j)
        {
            a = i;
            b = j;
        }

        void show()
        {
            cout << a <<"+"<<b<<"i";
        }
        A operator + (A);
};
A A::operator + (A obj)
{
    A temp;
    temp.a = a + obj.a;
    temp.b = b + obj.b;
    return (temp);

}

int main()
{
    //A obj1(3,5),obj2(4,5),obj3;
    int a,b,c,d;
    cout<<"enter the Complex number value of first object...";
    cin>>a;

    cout<<"enter the Real number value of first object...";
    cin>>b;

    cout<<"enter the Complex number value of Second object...";
    cin>>c;

    cout<<"enter the Real number value of Second object...";
    cin>>d;

    A obj1(a,b),obj2(c,d),obj3;

    cout << "The First Number is:";
    obj1.show();

     cout << "\nThe Second Number is:";
    obj2.show();


     cout <<"\nSum is:";
     obj3 = obj1+obj2;
     obj3.show();
     return 0;

}
