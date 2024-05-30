//Pointer and objects (cont...) 
#include<iostream>
using namespace std;
class demo 
{
    int i;
    public:
        demo(int x)
        {
            i=x;
        }
        int getdata()
        {
            return i;
        }
};
int main()
{
    demo d[3]={55,66,77};
    demo *ptr=d;//similar to *ptr=&d[0]
    for(int i=0;i<3;i++)
    {
        cout<<ptr->getdata()<<endl;
        //cout<<(*ptr).getdata()<<endl;//accessing it by another approach
        ptr++;
    }
    return 0;
}