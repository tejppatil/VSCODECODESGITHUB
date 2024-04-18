//Overloading Binary Operator == to check whether two objects are equal or not.
#include<iostream>
using namespace std;
class complex{
    int x,y;
    public:
        complex(){
            x=0,y=0;
        }
        complex(int num1, int num2){
            x=num1;y=num2;
        }
        void display(){
            cout<<"\nreal value: "<<x<<endl;
            cout<<"imag value: "<<y<<endl;
            
        }
        int operator== (complex);
};
int complex::operator==(complex c){
    if(x==c.x && y== c.y)
    {
        return 1;
    }
    else
    return 0;
}
int main(){
    complex c1(5,3),c2(5,3);
    if(c1==c2)
    {
        cout<<"Objects are equal";
    }
    else{
        cout<<"Objects are not equal";
    }
    return 0;
}