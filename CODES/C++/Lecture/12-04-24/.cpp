//Implement a C++ class called BankAccount with private data. 
//members balance and accountNumber. 
//Create a friend function named transfer Funds outside the class, 
//which takes two BankAccount objects as parameters and transfers 
//a specified amount from one account to another, updating their balances accordingly.
#include<iostream>
using namespace std;
class BankAccount
{
    private:
        float balance;
        string account_no;

    public:
        BankAccount(float bal,string acc_no):balance(bal),account_no(acc_no)
        {   
        }
        friend void transferfunds(BankAccount &from,BankAccount &to,float amount); 
        void display()
        {
            cout<<"Account Number:"<<account_no<<"Balance:"<<balance<<endl;
        }
};
class transferfunds(BankAccount)
{

};
int main()
{

}