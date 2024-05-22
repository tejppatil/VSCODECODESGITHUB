//Wite a C++ program to perform 3x3 matrix multiplication. 
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"Enter First Matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter ("<<i<<","<<j<<") element for first matrix: ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";  
        }
        cout<<endl;
    }
    cout<<"\nEnter Second Matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter ("<<i<<","<<j<<") element for second matrix: ";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";  
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][j]*b[i][j];
            }
        }
    }
    cout<<"\nAfter Matrix Multiplication:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";  
        }
        cout<<endl;
    }
    return 0;
}