//single inheritance program
#include<iostream>
using namespace std;
class animal
{
    int legs=4;
    public:
        void display1()
        {
            cout<<"\nLegs="<<legs;
        }
};
class Dog : public animal
{
    bool tail=true;
    public:
        void display2()
        {
            cout<<"\nTail="<<tail;
        }
};
int main()
{
    animal a1;
    Dog d1;
    d1.display1();
    d1.display2();
    return 0;
}