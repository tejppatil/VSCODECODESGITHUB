//2.Program for swap in c for call by reference
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
    int a,b;
    printf("Enter Value For a: ");
    scanf("%d",&a);
    printf("Enter Value For b: ");
    scanf("%d",&b);
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    return 0;
}
