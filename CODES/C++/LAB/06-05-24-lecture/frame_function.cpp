//friend function
#include<iostream>
using namespace std;

class Why
{
    int l, b, arara;
public:
    void area();
    friend void dikhao(Why y); // Declaration of friend function inside the class
};

void Why::area()
{
    cout << "For area of rectangle:" << endl;
    cout << "Length=";
    cin >> l;
    cout << "Breadth=";
    cin >> b;
    arara = l * b;
};

void dikhao(Why y)
{
    cout << "Area is " << y.arara; // Accessing member variable using object
};

int main()
{
    Why y;
    y.area(); // Calling member function to calculate area
    dikhao(y);
    return 0;
}
