//overloading prefix and postfix operator
#include<iostream>
using namespace std;
class demo
{
    int m;
    public:
        demo()
        {
            m=0;
        }
        demo(int x)
        {
            m=x;
        }
        void operator ++()
        {
            ++m;
            cout<<"Pre Increment="<<m<<endl;
        }
        void operator ++(int)
        {
            m++;
            cout<<"Post Increment="<<m;   
        }
};
int main()
{
    demo d1(5);
    ++d1;
    d1++;    
}