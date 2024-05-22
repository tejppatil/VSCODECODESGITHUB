//Write a program showing conversion between
//objects of different classes.
#include <iostream>
using namespace std;
class Celsius 
{
    private:
        float temperature;
    public:
    Celsius(float temp) : temperature(temp) {}
    // Getter method
    float getTemperature() const 
    {
        return temperature;
    }
    operator float() const 
    {
        return (temperature * 9 / 5) + 32;
    }
};
// Class Fahrenheit declaration
class Fahrenheit 
{
    private:
        float temperature;
    public:
    Fahrenheit(float temp) : temperature(temp) {}
    // Getter method
    float getTemperature() const 
    {
        return temperature;
    }
    operator float() const 
    {
        return (temperature - 32) * 5 / 9;
    }
};
int main() 
{
    float tempC, tempF;
    cout << "Enter temperature in Celsius: ";
    cin >> tempC;
    Celsius celsiusObj(tempC);
    tempF = celsiusObj;
    cout << tempC << " Celsius in Fahrenheit: " <<
    tempF << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> tempF;
    Fahrenheit fahrenheitObj(tempF);
    tempC = fahrenheitObj;
    cout << tempF << " Fahrenheit in Celsius: " <<
    tempC << endl;
    return 0;
}