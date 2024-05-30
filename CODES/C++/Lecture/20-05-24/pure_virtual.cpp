//Pure Virtual Function

#include <iostream>
using namespace std;

class shape
{
    protected:
        float x;
    
    public:
        void getdata()
        {
            cin >> x;
        }

        //virtual float calculatearea() = 0;
        virtual float calculatearea() {};
};

class square : public shape
{
    public:
        float calculatearea()
        {
            return x * x;
        }
};

class circle : public shape
{
    public:
        float calculatearea()
        {
            return 3.14 * x * x;
        }
};

int main()
{
    square s;
    circle c;
    cout<<"Enter length to calculate the area of a square:";
    s.getdata();
    cout<<"Area of square: "<<s.calculatearea()<<endl;
    cout<<"Enter radius to calculate the area of a circle: ";
    c.getdata();
    cout<<"Area of circle: "<<c.calculatearea()<<endl;
    return 0;
}