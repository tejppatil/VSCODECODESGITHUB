#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter the year: ");
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("%d is leap year",n);
    }
    else if(n%100==0)
    {
        printf("%d is nt",n);
    }
    else if(n%4==0)
    {
        printf("%d is leap year",n);
    }
    else
    {
        printf("%d is nt",n);
    }
    return 0;
}