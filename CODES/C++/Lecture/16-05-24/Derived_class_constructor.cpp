//
#include<iostream>
using namespace std;
class base
{
    int x;
    public:
        base()
        {
            cout<<"Base default constructors\n";
        }
};
class derived:public base
{
    int y;
    public:
        derived()
        {
            cout<<"Derived default constructor\n";
        }
        derived(int i)
        {
            cout<<"Derived parameterized constructor\n";
        }
};
int main()
{
    base b;
    derived d1;
    derived d2(10);
    return 0;    
}