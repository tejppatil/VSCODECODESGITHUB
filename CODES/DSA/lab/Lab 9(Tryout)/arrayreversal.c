#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        for(j=n-1;j>(n+1)/2;j--)
        {
            temp=a[i];
            a[i]=a[j-i];
            a[j-i]=temp;
        }
    }
    printf("\nReveresed array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}