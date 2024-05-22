//This pointer
#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
        void input(int a, int b)
        {
            this->a=a+b;
            this->b=a-b;
        }
        void output()
        {
            cout<<"a= "<<a<<endl;
            cout<<"b= "<<b;
        }
};
int main()
{
    sample ob1;
    int a=5,b=8;
    ob1.input(a,b);
    ob1.output();

    return 0;
}