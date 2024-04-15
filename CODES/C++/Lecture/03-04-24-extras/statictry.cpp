#include<iostream>
using namespace std;
class box
{
    private:
        static int length;
        static int breadth;
        static int height;
    public:
        static void print()
        {
            cout<<"length= "<<length<<endl;
            cout<<"breadth= "<<breadth<<endl;
            cout<<"height= "<<height<<endl;
        }
};
int box::lenght=10;
int box::breadth=20;
int box::height=30;
int main()
{
    cout<<"/nStatic member function called theough class name: "<<endl;
    
}