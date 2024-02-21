//program that calculates the area of a rectangle and a circle based on user input.
#include<stdio.h>
int main()
{
    int n;
    float a,b,r;
    printf("For Area of rectangle click-1\nFor Area of Circle click-2\n= ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter value of side 1(2 decimal point): ");
        scanf("%f",&a);
        printf("Enter value of side 2(2 decimal point): ");
        scanf("%f",&b);
        printf("The Area of Rectangle is %f", a*b);
        return 0;
    }
    if(n==2)
    {
        printf("The radius of circle is: ");
        scanf("%f",&r);
        printf("The Area of Circle is %f",3.14*r*r);
        return 0;
    }
    else
    return 0;
}