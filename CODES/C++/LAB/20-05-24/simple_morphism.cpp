//Write a C++ program to demonstrate simple polymorphism
#include <iostream>
using namespace std;
class Shape 
{
    public:
        virtual void display() 
        {
            cout << "This is a shape." << endl;
        }
};
class Circle : public Shape 
{
    public:
        void display() override 
        {
            cout << "This is a circle." << endl;
        }
};
int main() 
{
    Shape* shapePtr; 
    Circle circle; 
    shapePtr = &circle; 
    shapePtr->display();
    return 0;
}
