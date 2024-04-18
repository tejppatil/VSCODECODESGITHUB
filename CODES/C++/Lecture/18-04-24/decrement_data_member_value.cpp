//overloading unary operator-- data member value
#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public:
        space()
        {
            x=y=z=0;
        }
        space(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void display()
        {
            cout<<"\nx="<<x<<",y="<<y<<",z="<<z;
        }
        void operator--();
};
void space::operator--()
{
    x=--x;
    y=--y;
    z=--z;
}
int main()
{
    space s1(5,4,3);
    s1.display();
    --s1;
    s1.display();
    return 0;
}