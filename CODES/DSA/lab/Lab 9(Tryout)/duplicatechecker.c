//
#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    int b[a[i]];
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
    b[a[i]]++;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[a[i]]>1)    
            {
                printf("\n%d is Repeated in array",a[i]);
                b[a[i]]=0;
                break;   
            }
        }
    }       
}