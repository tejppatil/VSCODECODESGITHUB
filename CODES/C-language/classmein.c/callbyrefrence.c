#include<stdio.h>
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("x=%d,y=%d",x,y);
}
int main()
{
    int a=10,b=20;
    printf("a=10,b=20\n",a,b);
    swap(&a,&b);
    return 0;
}