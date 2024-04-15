// static data member
#include<iostream>
using namespace std;
class item
{
    int number;
    static int count;
    public:
    void getdata(int a)
    {
        number= a;
        count++;
    }
    void getcount()
    {
        cout<<"\nValue: "<<count;
    }
};
int item::count;
int main()
{
    item a,b,c;
    a.getdata(300);
    a.getcount();

    b.getdata(400);
    b.getcount();

    c.getdata(500);
    c.getcount();
    return 0;
}