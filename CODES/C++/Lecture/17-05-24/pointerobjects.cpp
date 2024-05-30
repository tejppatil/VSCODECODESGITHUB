//Pointer and objects (cont...) 
#include<iostream>
using namespace std;
class demo 
{
    int i;
    public:
        demo(int x)
        {
            i=x;
        }
        int getdata()
        {
            return i;
        }
};
int main()
{
    demo d(55),*ptr;
    ptr=&d;
    //cout<<(*ptr).getdata();//accessing it by another approach
    cout<<ptr->getdata();
    return 0;
}