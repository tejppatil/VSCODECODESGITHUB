#include<iostream>
using namespace std;
enum Gender{//Declare an enum named "Gender"
Male,  //Represents male gender
Female //Represents Female gender
};
int main()
{
    Gender gender= Male;//Create a variable of type " Gender " and initialize it with " Male "
    switch (gender){//Use a switch statement to handle different gender values
    case Male:
        cout<<"Gender is Male";  //print msg for male
        break;
    case Female:
        cout<<" Gender is Female"; //print msg for female
        break;
    default:
        cout<<"Value can be Male or Female";
        }
}