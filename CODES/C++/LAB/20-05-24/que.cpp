//Create an Abstract class vehicle having average as data and pure virtual function getdata () and putdata (). 
//Derive class car and truck from class vehicle having data members: 
//fuel type (petrol, diesel, CNG) and no of wheels respectively. 
//Write a main () that enters the data of two cars and a truck and display the details of them.
#include <iostream>
#include <string>
using namespace std;
class Vehicle 
{
    protected:
        double average; // Common data member
    public:
        // Pure virtual function for input
        virtual void getdata() = 0;
        // Pure virtual function for display
        virtual void putdata() const = 0;
};
// Derived class Car
class Car : public Vehicle 
{
    private:
        string fuelType;
    public:
        void getdata() override 
        {
            cout << "Enter car average: ";
            cin >> average;
            cout << "Enter car fuel type (petrol/diesel/CNG): ";
            cin >> fuelType;
        }
        void putdata() const override 
        {
            cout << "Car details:\n";
            cout << "Average: " << average << " km/l\n";
            cout << "Fuel type: " << fuelType << "\n";
        }
};
// Derived class Truck
class Truck : public Vehicle 
{
    private:
        int numWheels;
    public:
        void getdata() override 
        {
            cout << "Enter truck average: ";
            cin >> average;
            cout << "Enter number of wheels: ";
            cin >> numWheels;
        }
        void putdata() const override 
        {
            cout << "Truck details:\n";
            cout << "Average: " << average << " km/l\n";
            cout << "Number of wheels: " << numWheels << "\n";
        }
};
int main() 
{
    Car car1, car2;
    Truck truck;
    cout << "Enter details for Car 1:\n";
    car1.getdata();
    cout << "Enter details for Car 2:\n";
    car2.getdata();
    cout << "Enter details for Truck:\n";
    truck.getdata();
    cout << "\nDisplaying details:\n";
    car1.putdata();
    car2.putdata();
    truck.putdata();
    return 0;
}
