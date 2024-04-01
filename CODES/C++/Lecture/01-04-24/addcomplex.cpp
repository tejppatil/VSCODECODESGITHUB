//Define class complex with members real and imaginary also define function to setdata()  to initialize the members,print( to display values and addnumbers() that addas two complex objects
#include<iostream>
using namespace std;
class complex 
{
    int real,imag;
    public: 
        void readdata()
        {
            cout<<"Enter the real number: ";
            cin>>real;
            cout<<"Enter the imaginary number: ";
            cin>>imag;
        }
        void addnumbers(complex comp1,complex comp2)
        {
            real=comp1.real+comp2.real;
            imag=comp1.imag+comp2.imag;
        }
        void display()
        {
            cout<<"sum= "<<real<<"+"<<imag<<"i";
        }
};
int main()
{
    complex c1,c2,c3;
    cout<<"For first complex number:"<<endl;
    c1.readdata();
    cout<<"For second complex number:"<<endl;
    c2.readdata();
    cout<<"After addition of complex numbers:"<<endl;
    c3.addnumbers(c1,c2);
    c3.display();
    return 0;    
}
