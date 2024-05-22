#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int j=n-1;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[j-i];
        a[j-i]=temp;
    }
    printf("\nReveresed array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}