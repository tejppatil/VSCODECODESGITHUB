#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x==0) throw x;   
        if(x==-1) throw 'a';
        if(x==1) throw 5.15;
    }
    catch(...)
    {
        cout<<"Caught an exception\n";
    }
}
int main()
{
    test(-1);
    test(0);
    test(1);
}