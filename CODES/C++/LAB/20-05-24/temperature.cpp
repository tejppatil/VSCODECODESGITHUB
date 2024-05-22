#include<iostream>
using namespace std;

float cel(float c);
float far(float f);

int main() 
{
    int n;
    start:
    cout<<"\n\nEnter 1 for celsius to fahrenheit or Enter 2 to Fahrenheit to celsius or 0 to stop\n=";
    cin>>n;
    if(n==0)
    {
        return 0;
    }
    else
    {
    switch(n)
    {
        case 1:
        {
            float c,f;
            cout<<"Enter the temperature in celsius: ";
            cin>>c;
            f=((c*9/5)+32);
            cout<<"The given temperature is "<<f<<" in Fahreheit ";
            goto start;
        }
        case 2:
        {
            float c,f;
            cout<<"\nEnter the temperature in fahrenheit: ";
            cin>>f;
            c=((f-32)*5/9);
            cout<<"The given temperature is "<<c<<" in celsius ";
            goto start;

        }
    }   
    }
    return 0;
}
