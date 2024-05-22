//Write a Program to swap private data members of classes named as class_1, class_2 using friend function
#include <iostream>
using namespace std;
class Class2; 
class Class1 
{
    private:
        int data1;
    public:
        // Constructor
        Class1(int val) : data1(val) {}
        // Friend function declaration
        friend void swapData(Class1 &c1, Class2 &c2);
        // Display function
        void display() const 
        {
            cout << "Class1 data: " << data1 << endl;
        }
};
class Class2 
{
    private:
        int data2;
    public:
        // Constructor
        Class2(int val) : data2(val) {}
        // Friend function declaration
        friend void swapData(Class1 &c1, Class2 &c2);
        // Display function
        void display() const 
        {
            std::cout << "Class2 data: " << data2 << std::endl;
        }
};
// Friend function definition
void swapData(Class1 &c1, Class2 &c2) 
{
    int temp = c1.data1;
    c1.data1 = c2.data2;
    c2.data2 = temp;
}
int main() 
{
    // Creating objects of Class1 and Class2
    Class1 obj1(10);
    Class2 obj2(20);
    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();
    // Swapping data members using the friend function
    swapData(obj1, obj2);
    cout << "After swapping:" << endl;
    obj1.display();
    obj2.display();
    return 0;
}