//Write a program that illustrates the application of multiple catch statements.
#include <iostream>
#include <stdexcept>
using namespace std;
double divide(double a, double b) 
{
    if (b == 0) 
    {
        throw runtime_error("Cannot divide by zero!");
    }
    return a / b;
}
int main() 
{
    try 
    {
        // Some code that might throw an exception
        double x,y;
        cout<<"Enter 2 values: \n";
        cin>>x>>y;
        double result = divide(x,y); // Attempting to divide by zero
        cout << "Result: " << result << endl;
    } 
    catch (const std::bad_alloc& e) 
    {
        cout << "Caught a bad_alloc exception: " << e.what() <<endl;
    } catch (const std::exception& e) 
    {
        cout << "Caught a generic exception: " << e.what() << endl;
    }
    return 0;
}
