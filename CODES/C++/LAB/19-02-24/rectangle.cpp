//MAking a rectangle by taking inputof sides from a user
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the height of rectangle: ";
    cin>>a;
    cout<<"ENter the width of rectangle: ";
    cin>>b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}