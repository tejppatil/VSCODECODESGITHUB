//wac++p to find the sum of an array(data member)
#include<iostream>
using namespace std;
class array
{
    int a[5];
    public:
        array()
        {
            for(int i=0;i<5;i++)
            {
                a[i]=i*2;
            }
        }
        operator int();
}; 
array::operator int()
{
    int sum=0;
    for(int i=0;i<5;i++)
        {
            sum=sum+a[i];
        }
        return sum;
}
int main()
{
    array a;
    int sum;
    sum=a;
    cout<<"Sum of a="<<sum;
    return 0;
}
