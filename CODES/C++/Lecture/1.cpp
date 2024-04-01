#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    int a=20, b=10;
    swap(a,b);
    cout<<a<<" "<<b;
      
}