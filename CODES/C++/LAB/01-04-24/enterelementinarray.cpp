//Write a C++ program to enter an element in an array and display it. 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" element: ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}