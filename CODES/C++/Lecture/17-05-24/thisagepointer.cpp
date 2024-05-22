#include<iostream>
using namespace std;
class person
{
    int age;
    public:
        person(int x)
        {
            age=x;
        }
        void display()
        {
            cout<<"Age= "<<age;
        }
        person olderperson(person p)
        {
            if(age>p.age)
                return *this;
            else 
                return p;
        }
};
int main()
{
    person r(35),h(30);
    person o=r.olderperson(h);
    o.display();
}