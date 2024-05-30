//Write a C program to implement Linear Search.
#include<stdio.h>
int main()
{
    int n,i,b;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Any number:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            printf("Entered No. is in array at index %d",i);
            return 0;
        }
    }
    {
        printf("Entered No. is not in array.");
    }    
    
        
    return 0;
}