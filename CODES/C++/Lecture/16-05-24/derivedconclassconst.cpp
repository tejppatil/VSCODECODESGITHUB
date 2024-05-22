//
#include<iostream>
using namespace std;
class base
{
    int x;
    public:
        base(int i)
        {
            x=i;
            cout<<"x= "<<x<<endl;
        }
};
class derived:public base
{
    int y;
    public:
        derived(int i,int j):base (j)
        {
            y=i;
            cout<<"y= "<<y;
        }
};
int main()
{
    derived d(10,20);
    return 0;
}