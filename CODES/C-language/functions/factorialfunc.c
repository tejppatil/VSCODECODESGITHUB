//Create a function to calculate the factorial of a number
#include<stdio.h>
int factorial(int n)
{
    for(int i=n-1;i>=1;i--)
    {
        n= n*i;
    }
    return n;
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}