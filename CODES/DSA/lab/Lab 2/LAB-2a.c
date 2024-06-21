//Write a C program to implement Linear Search.
#include<stdio.h>
int linear_search(int a[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}
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
    int index=linear_search(a,n,b);
    if(index==-1)
    {
        printf("Entered No. is not in array.");
    }    
    else
    {
        
        printf("Entered No. is in array at index %d\n",i);
    }
    return 0;
}