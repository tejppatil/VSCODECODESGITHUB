//making a rectangle by only printing borders
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the No. of stars in Side 1: ";
    cin>>a;
    cout<<"Enter the No. of stars in Side 2: ";
    cin>>b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==1||i==a)//|| j==1 || j==b)
            {
                cout<<"*";
            }
            else if(j==1||j==b)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}