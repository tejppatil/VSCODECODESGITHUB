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
        }
        void print()
        {
            cout<<"Time is "<<hour;
            cout<<" hour "<<min;
            cout<<" minutes "<<endl;
        }
        time addtime(time t1,time t2)
        {
            time t4;
            t4.hour=t1.hour+t2.hour;
            t4.min=t1.min+t2.min;
            return t4;
        }
};
int main()
{
    time t1,t2,t3, ans;
    t1.gettime();
    t1.print();
    t2.gettime();
    t2.print();
    ans = t3.addtime(t1,t2);
    ans.print();
    return 0;

}