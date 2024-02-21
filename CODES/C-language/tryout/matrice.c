#include<stdio.h>
int main()
{
    int i=1,j=1;
    int a[2][2]={1,2,3,4};
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
             printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}