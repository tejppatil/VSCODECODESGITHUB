#include <iostream>
using namespace std;
int main() 
{
    try 
    {
        int numerator, denominator;
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
        if (denominator == 0) 
        {
            throw runtime_error("Division by zero is not allowed.");
        }
        double result = static_cast<double>(numerator) / denominator;
        cout << "Result: " << result << endl;
    } 
    catch (const exception& e) 
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
