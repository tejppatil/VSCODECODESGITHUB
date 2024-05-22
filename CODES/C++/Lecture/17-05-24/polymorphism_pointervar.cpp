//Pointer and objects 
#include<iostream>
using namespace std;
class ABC 
{
    public:
        int a=50;
};
int main()
{
    ABC obj1;
    ABC *ptr;
    ptr=&obj1;
    cout<<obj1.a<<endl;
    cout<<ptr->a; //Accessing member with pointer
    //cout<<(*ptr).a;
    return 0;
}