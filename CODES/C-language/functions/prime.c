//Develop a program to check if a number is prime or not using a function.
#include<stdio.h>
int prime(int n)
{
    if(n<=1)
    {
        printf("neither a composite nor a prime");
        return 0;
    }
    else
        for(int i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(prime(n))
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
    return 0;
}