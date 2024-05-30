#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
        {
            if(x==1)
            {
                throw x;
            }
            else if(x==0)
            {
                throw 'x';
            }
            else if(x==-1)
            {
                throw 5.14;
            }
        }
    }
    catch(int i)
        {
            cout<<"\nCaught an integer";
        }
    catch(char ch)
        {
            cout<<"\nCaught a character";
        }
    catch(double i)
        {
            cout<<"\nCaught a double";
        }            
}
int main()
{
    test(1);
    test(0);
    test(-1);
}