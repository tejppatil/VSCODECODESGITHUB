//Write a program of function overloading taking input of student name and enrollment number and Count the number of characters in both.
#include <iostream>
#include <string>
using namespace std;
int countChars(string name) 
{
  return name.length();
}
int countChars(long long enrollmentNumber) 
{
  int numDigits = 0;
  while(enrollmentNumber > 0) 
{
    enrollmentNumber /= 10;
    numDigits++;
  }
  return numDigits;
}
int main() 
{
  string name;
  long long enrollmentNumber;
  cout << "Enter student name: ";
  getline(cin,name);
  cout << "Enter enrollment number: ";
  cin >> enrollmentNumber;
  int nameLength = countChars(name);
  int numberLength = countChars(enrollmentNumber);
  cout << "Student name: " << name << endl;
  cout << "Name length: " << nameLength << endl;
  cout << "Enrollment number: " << enrollmentNumber << endl;
  cout << "Enrollment number length: " << numberLength << endl;
  return 0;
}
