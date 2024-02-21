//Create a program to reverse the elements of an array.
#include<stdio.h>
int main()
{
    int n,i,s;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d elements value of array: ",i);
        scanf("%d",&a[i]);
    }
    printf("Your given array is:-");
    printf("[");
    for(s=0;s<i-1;s++)
    {
        printf("%d, ",a[s]);
    }
    for(s=i-1;s<i;s++)
    {
        printf("%d",a[s]);
    }
    printf("]");
    printf("\n");
    //for reverse printing
    for(i=0;i<n/2;i++)
    {
        int reverse=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=reverse;
    }
    printf("Reversed Array:-");
    printf("[");
    for(s=0;s<n-1;s++)
    {
        printf("%d, ",a[s]);
    }
    for(s=n-1;s<n;s++)
    {
        printf("%d",a[s]);
    }
    printf("]");
    return 0;
}