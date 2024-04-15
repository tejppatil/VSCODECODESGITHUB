//Overloading binary operator== to cheack whether two objects are equal or not.
class complex 
{
    int r,i;
    public:
        complex()
        {
            r=i=0;
        }
        complex(int x,int y)
        {
            r=x;
            r=y;
        }
        void display()
        {
            cout<<"\nreal="<<r<<endl;
            cout<<"imag="<<r<<endl;
        }
}
