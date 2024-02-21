//Write a C program to check if the entered number is prime or not by using types of user-defined functions with all bellow four techniques. (4 different programs)
//3. Argument passed but no return value.
#include<stdio.h>
int prime(int n,int isprime)
{
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
    if(isprime)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
}
int main()
{
    int n=0;
    int isprime=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n,isprime);
    return 0;
}