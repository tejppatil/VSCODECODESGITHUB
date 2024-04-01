//write a progam with class having time in w.r.t hour minutes and seeconds 
#include<iostream>
using namespace std;
class time
{
    int hour,min,sec;
    public:
        void gettime()
        {
            cout<<"Enter hour: ";cin>>hour;
            cout<<"Enter minutes: ";cin>>min;
            cout<<"Enter seconds: ";cin>>sec;
        }
        void print()
        {
            cout<<"Time is "<<hour;
            cout<<" hour "<<min;
            cout<<" minutes "<<sec<<" seconds"<<endl;
        }
        void addtime(time x,time y)
        {
            hour=x.hour+y.hour;
            min=x.min+y.min;
            sec=x.sec+y.sec;
        }
};
int main()
{
    time t1,t2,t3;
    t1.gettime();
    t1.print();

    t2.gettime();
    t2.print();

    t3.addtime(t1,t2);
    cout<<"After adding two objects: "<<endl;
    t3.print();
    return 0;
}