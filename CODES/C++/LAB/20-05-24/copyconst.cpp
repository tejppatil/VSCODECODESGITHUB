#include <iostream>
using namespace std;
class Time
{
    private:
        int Hours;
        int Minutes;
        int Seconds;
    public:
        Time() {}
        Time(int h, int m, int s)
        {
            Hours = h;
            Minutes = m;
            Seconds = s;
        }
        Time(Time &T)
        {
            Hours = T.Hours;
            Minutes = T.Minutes;
            Seconds = T.Seconds;
        }
        void displaydata()
        {
            cout << "Hours: " << Hours << endl;
            cout << "Minutes: " << Minutes << endl;
            cout << "Seconds: " << Seconds << endl;
        }
};
int main()
{
    Time T1(1, 2, 3);
    T1.displaydata();
    Time T2;
    T2 = T1;
    T2.displaydata();
    return 0;
}
