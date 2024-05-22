//hybrid inheritance program
#include<iostream>
using namespace std;
class car
{
    public:
        void display1()
        {
            cout<<"\nCar Class";
        }
};
class FuelCar:public car
{
    public:
        void display2()
        {
            cout<<"\nFuelCar Class";
        }
};
class ElecCar:public car
{
    public:
        void display3()
        {
            cout<<"\nElecCar Class";
        }
};
class HybridCar:public FuelCar,public ElecCar
{
    public:
        void display4()
        {
            cout<<"\nHybridCar Class";
        }
};
int main()
{
    car c;
    FuelCar f;
    ElecCar e;
    HybridCar h;
    h.display4();
    h.display3();
    h.display2();
    return 0;
}