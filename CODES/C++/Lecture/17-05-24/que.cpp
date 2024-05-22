//Create a class student having private members marks, name 
//and public members rollno, getdata(), printdata(). 
//Demonstrate concept of pointer to class members for array of 3 objects
#include<iostream>
#include<string>
using namespace std;
class student
{
    int marks;
    string name;
    public:
        int rollno;
        void getdata()
        {
            cout<<"Enter the roll no: ";
            cin>>rollno;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the marks: ";
            cin>>marks;              
        }
        void printdata()
        {
            cout << "Roll No: " << rollno << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
};
int main()
{
    student s[3],*ptr;
    *ptr=s;
    for(int i=0;i<3;i++)
    {
        cout << "For person " << i + 1 << ":" << endl;
        ptr[i].getdata();
        ptr[i].printdata();
    }
    return 0;
}