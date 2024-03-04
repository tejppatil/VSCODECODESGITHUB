//Write a basic program for depicting function overloading.
#include <iostream>
using namespace std;
int add(int x, int y) 
{
  return x + y;
}
double add(double x, double y) 
{
  return x + y;
}
int add(int x, int y, int z) 
{
  return x + y + z;
}
int main()
 {
  int sum_int = add(7, 3);
  cout << "Sum of integers: " << sum_int << endl;
  double sum_double = add(2.7, 1.7);
  cout << "Sum of doubles: " << sum_double << endl;
  int sum_three = add(1, 2, 3);
  cout << "Sum of three integers: " << sum_three << endl;
  return 0;
}
