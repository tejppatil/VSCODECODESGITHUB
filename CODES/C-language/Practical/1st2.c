//Write a C program to check if the entered number is prime or not by using types of user-defined functions with all bellow four techniques. (4 different programs)
//2. No arguments passed but a return value.
#include<stdio.h>
int prime()
{
    int n=0;
    int isprime=0;
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
                break;
            }
        }
    }
    return isprime;
}
int main()
{
    int isprime;
    isprime=prime();
    if(isprime)
    {
        printf("Number is a prime number.");
    }
    else
    {
        printf("Number is not a prime number.");
    }
    return 0;
}