#include<iostream>
using namespace std;
class test
{
    private:
        int data1;
        float data2;
    public:
        void function1()
        {
            data1=2;
        }
        float function2()
        {
            data2=3.5;
            return data2;
        }
};
int main()
{
    test t1;
    t1.function1();
    t1.function2();
}