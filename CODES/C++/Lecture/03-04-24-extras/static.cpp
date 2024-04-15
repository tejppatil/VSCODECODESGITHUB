//Static Data members
#include<iostream>
using namespace std;
class demo
{
    static int count;
    public:
    void getcount()
    {
        cout<<"Count: "<<++count<<endl;
    }
};
int demo::count;
int main()
{
    demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
    return 0;
}