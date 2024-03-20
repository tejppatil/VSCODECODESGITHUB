//using class and object to access specifier with any program
#include<iostream>
using namespace std;
class work
{
    private:
        int l,h;
    public:
        void area()
        {
            cout<<"Enter the length: ";
            cin>>l;
            cout<<"Enter the height: ";
            cin>>h;
        }
        void sol()
        {
            cout<<"Area of rectangle is "<<l*h;
        }
};
int main()
{
    work rectangle;
    cout<<"For the Area of rectangle: "<<endl;
    rectangle.area();
    rectangle.sol();
    return 0;
}