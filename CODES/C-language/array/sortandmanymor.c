//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include<stdio.h>
int main()
{
    int n,i,s,j,r,k,count;
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
    for(r=0, count; r<=s; r++)
    {
        if(count!=0)
        {
            for(int temp, count=0, k=0; k<=s-1; k++)
            {
                if (a[k] >= a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    count=1;
                }
            }
        }
        else
        {
            break;
        }
        
    }
    printf("\n");
            

    printf("New 1d array is: \n");

    printf("[");
    for(i=0; i<s-1; i++)
    {
        printf("%d, ", a[i]);
    }
    for(i=s-1; i<s; i++)
    {
        printf("%d", a[i]);
    }
    printf("]");
    return 0;

}