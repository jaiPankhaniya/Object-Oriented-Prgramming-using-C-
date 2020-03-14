//program for the bank account for the 10 members.....

#include<iostream>

using namespace std;

class bank_account
{
    public:
        string d_name,ac_type;
        int ac_no;
        float bal;

    public:
        void assign();
        void display();
        void withdraw();
        void deposit();

};

void bank_account :: assign()
{
    cout<<"Enter the name:";
    cin>>d_name;
    cout<<"Enter the account number:";
    cin>>ac_no;
    cout<<"Enter the type of the account:";
    cin>>ac_type;
    cout<<"Enter the current Balance of account:";
    cin>>bal;
}

void bank_account :: deposit()
{
    float val;
    cout<<"\n----------------------------------DEPOSIT----------------------------------\n";
    cout<<"Enter the amount to deposit:-";
    cin>>val;
    bal=bal+val;
    cout<<"..........details after deposit..........\n";
    display();
}

void bank_account :: withdraw()
{
    float val;
    cout<<"\n----------------------------------WITHDRAWAL----------------------------------\n";
    cout<<"Enter the amount to Withdraw:-";
    cin>>val;
    bal=bal-val;
    display();
}

void bank_account :: display()
{
    cout<<"\n----------------------------------ACCOUNT DETAILS----------------------------------\n";
    cout<<"Name:-"<<d_name;
    cout<<"\naccount Number:-"<<ac_no;
    cout<<"\nType of account:-";
    cout<<"\nTotal Balance:-"<<bal;
}

int main()
{
    int choice;
    bank_account b;
    b.assign();

    cout<<"\n 1)To deposit an amount......... \n 2) withdraw an amount........ \n 3) Display................ \n";
    cout<<"\nChoose the proper choice......";
    cin>>choice;
    label:

        switch(choice)
        {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;

            case 3:
                b.display();
                break;

            default:
                cout<<"ERROR !!!!!!!!!!!!!!!!!.... Enter the correct option";
                goto label;
        }
        return 0;
}
