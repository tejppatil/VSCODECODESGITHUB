//Write a C program to check if the entered number is prime or not by using types of user-defined functions with all bellow four techniques. (4 different programs)
//1. No arguments passed and no return value.
#include<stdio.h>
int prime()
{
    
    int n=0;
    int isprime=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Number is not suitable to say wheather its prime or not.");
    }
    else
    {
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
               isprime=0;
            }
        }
    }
    if(isprime)
    {
        printf("%d is prime number.",n);
    }
    else
    {
        printf("%d is not prime number.",n);
    }
}
int main()
{
    prime();
    return 0;
}