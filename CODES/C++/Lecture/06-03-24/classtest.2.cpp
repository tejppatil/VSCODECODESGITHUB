#include<iostream>
using namespace std;
class Test
{
    private:
        int mark;
        float spi;
    public:
        void SetData()
        {
            cin>>mark;
            cin>>spi;
        }
        void DisplayData()
        {
            cout<<"Mark= "<<mark<<endl;
            cout<<"spi= "<<spi;
        }
};
int main()
{
    Test o1,o2;
    o1.SetData();
    o1.DisplayData();
    o2.SetData();
    o2.DisplayData();
    return 0;
}