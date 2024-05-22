//Write a program showing conversion between objects of different classes.
#include <iostream>
class ClassB;  // Forward declaration of ClassB
class ClassA {
public:
    int value;
    // Default constructor
    ClassA(int v = 0) : value(v) {}
    // Conversion constructor: ClassB -> ClassA
    ClassA(const ClassB& b);
    void display() const 
    {
        std::cout << "ClassA value: " << value << std::endl;
    }
};
class ClassB 
{
    public:
        double value;
        // Default constructor
        ClassB(double v = 0.0) : value(v) {}
        // Conversion constructor: ClassA -> ClassB
        ClassB(const ClassA& a) : value(a.value) {}
        // Conversion operator: ClassB -> ClassA
        operator ClassA() const 
        {
            return ClassA(static_cast<int>(value));
        }
        void display() const 
        {
            std::cout << "ClassB value: " << value << std::endl;
        }
};
// Implementation of conversion constructor: ClassB -> ClassA
ClassA::ClassA(const ClassB& b) : value(static_cast<int>(b.value)) {}
int main() 
{
    // Creating objects of ClassA and ClassB
    ClassA a1(42);
    ClassB b1(3.14);
    a1.display();
    b1.display();
    // Converting ClassB object to ClassA using conversion constructor
    ClassA a2 = b1;
    a2.display();
    // Converting ClassA object to ClassB using conversion constructor
    ClassB b2 = a1;
    b2.display();
    // Converting ClassB object to ClassA using conversion operator
    ClassA a3 = static_cast<ClassA>(b2);
    a3.display();
    return 0;
}
