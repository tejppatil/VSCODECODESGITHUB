//Write a C++ program to Store and Display Employee Information.
#include<iostream>
using namespace std;
class employee
{
    private:
        string name;
        long long mobno;
        long emplyeeid;
        long salary;
    public:
        void getdata(string n, long long m, long e, long s)
        {
            name = n;
            mobno = m;
            emplyeeid = e;
            salary = s;
        }

        void printdata()
        {
            cout << "Name: " << name << endl;
            cout << "Mobile Number: " << mobno << endl;
            cout << "Employee ID: " << emplyeeid << endl;
            cout << "Salary: " << salary << endl;
        }
};
int main()
{
    cout << endl;
    employee e1;
    e1.getdata("Vijay", 9763946512, 01, 21000);
    e1.printdata();
    cout << endl;
    return 0;
}
