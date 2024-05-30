//Overloading 
#include<iostream>
using namespace std;
class torrent
{
    int img,vid;
    public:
        torrent()
        {
            img=0;
            vid=0;
        }
        torrent(int x,int y)
        {
            img=x;
            vid=y;
        }
        void display()
        {
            cout<<"img="<<img<<endl;
            cout<<"vid="<<vid<<endl;
        }
};
int main()
{
    torrent t1(5,6);
    t1.display();
    return 0;
}