//hierarchical inheritance program
#include<iostream>
using namespace std;
class animal
{
    public:
        void display1()
        {
            cout<<"\nAnimal Class";
        }
};
class elephant:public animal
{
    public:
        void display2()
        {
            cout<<"\nElephant Class";
        }
};
class horse:public animal
{
    public:
        void display3()
        {
            cout<<"\nHorse Class";
        }
};
class cow:public animal
{
    public:
        void display4()
        {
            cout<<"\nCow Class";
        }
};
int main()
{
    animal a;
    elephant e;
    horse h;
    cow c;
    a.display1();
    e.display2();
    e.display1();
    h.display3();
    h.display1();
    c.display4();
    c.display1();
    return 0;
}