//Write a program that calculates the power of a number using a user-defined function
#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
        return 1;
    else if(a==0)
        return 0;
    else
        return a*power(a,b-1);
}
int main()
{
   int a,b;
   printf("Enter the Number: ");
   scanf("%d",&a);
   printf("Enter the power of number: ");
   scanf("%d",&b);
   printf("The value of power is %d",power(a,b));
   return 0;
}