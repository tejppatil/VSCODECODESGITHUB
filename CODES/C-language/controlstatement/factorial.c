//Implement a program to find the factorial of a number using iterative approaches.
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the Factorial No.: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}