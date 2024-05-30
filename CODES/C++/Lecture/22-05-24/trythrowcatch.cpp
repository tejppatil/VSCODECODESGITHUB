//try, throw and catch
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two values:"<<endl;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"answer="<<c;
        }
        else
        {
             throw(b);
        }
    }
    catch(int x)
    {
        cout<<"Exception caught:Divide by zero\n";
    }
}