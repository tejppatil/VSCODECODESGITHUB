//Write a program for single inheritance
#include<iostream>
using namespace std;
class add
{
    public:
        int n,m;
        void number()
        {
            n=0;
            m=0;
        }
        void getnumber(int x,int y)
        {
            n=x;
            m=y;
        }
        void display1()
        {
            cout<<"Entered Numbers are "<<n<<" and "<<m<<endl;
        }
};
class sum:public add
{
    public:
    void display2()
    {
        cout<<"Sum of both are "<<n+m;
    }  
};
int main()
{
    int x=0,y=0;
    cout<<"Enter num1: ";
    cin>>x;
    cout<<"Enter num2: ";
    cin>>y;
    add r;
    sum s;
    s.getnumber(x,y);
    s.display1();
    s.display2();
    return 0;
}