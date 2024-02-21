//find maximum value in an array using pointer
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the values in array: \n");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p;
    p=&a[0];
    for(j=0;j<i;j++)
    {
        printf("%d ",*(p+j));
    }
    
    return 0;
}