//
#include<stdio.h>
int main()
{
    int n,i,j;
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
    int count[n];
    count[a[n]]++;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(count[a[i]]>1)    
            {
                printf("\n%d is Repeated in array",a[i]);
                count[a[i]]=0;
                break;   
            }
        }
    }       
}