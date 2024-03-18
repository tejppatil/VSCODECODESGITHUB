//create class,object and adding program
//using class and object two access specifier with any program
//
#include<iostream>
using namespace std;
class add
{
    Public:
        int num1;
        int num2; 
};
int main()
{
    add sum;
    cout<<"Enter the 1st num: ";
    cin>>sum.num1;
    cout<<"Enter the 2nd num: ";
    cin>>sum.num2;
    cout<<"Sum = "<<sum.num1+sum.num2;
}