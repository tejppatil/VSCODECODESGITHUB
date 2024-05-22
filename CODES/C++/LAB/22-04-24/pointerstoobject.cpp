//Write a Program to illustrate the use of pointers to objects which are related by inheritance. 
#include<iostream>
using namespace std;
class Addition
{
    public:
        int add;
        void display()
        {
            cout<<"Displaying Addition class"
                <<" variable add: "<<add<<endl;
        }
};
class Sum : public Addition
{
    public:
        int sum;
        void display()
        {
            cout<<"Displaying Addition class"
                <<" variable add: "<<add<<endl;
            cout<<"Displaying Sum "
                <<"class variable sum: "<<sum<<endl;
        }
};

int main()
{
    Addition* pointerA;
    Addition A;
    Sum B;

    pointerA=&B;
    pointerA->add=34;
    pointerA->display();
    pointerA->add=3400;
    pointerA->display();

    Sum* pointerB;
    pointerB=&B;
    pointerB->add=9448;
    pointerB->sum=98;
    pointerB->display();
    return 0;    
}