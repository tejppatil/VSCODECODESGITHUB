//Write a program to calculate the area of a triangle using Heron's formula.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the lenghth of side1= ");
    scanf("%f",&a);
    printf("Enter the lenghth of side2= ");
    scanf("%f",&b);
    printf("Enter the lenghth of side3= ");
    scanf("%f",&c);
    float s;
    s=((a+b+c)/2);
    float area;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle with provided sides is %.2f",area);
    return 0;
}