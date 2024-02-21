//Create a program to find the sum of elements in an array using pointers.
#include<stdio.h>
int main()
{
    int n,i,s;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
    //sum of elements
    int sum=0;
    for(int d=0;d<s;d++)
    {
        sum=sum+a[d];
    }
    printf("\nThe sum of elemenys in array is %d\n",sum);
    return 0;
}